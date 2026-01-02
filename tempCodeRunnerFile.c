#include <stdio.h>
#include <ctype.h>
#include <string.h>

// List of C keywords
char *keywords[] = {
    "int", "float", "char", "if", "else", "while", "return"
};

// Check if a string is a keyword
int isKeyword(char *str) {
    for (int i = 0; i < 7; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Skip comments (single-line or multi-line)
void skipComment(FILE *fp) {
    int c = fgetc(fp);
    if (c == '/') {
        // Single-line comment
        while (c != '\n' && c != EOF)
            c = fgetc(fp);
    } else if (c == '*') {
        // Multi-line comment
        int prev;
        do {
            prev = c;
            c = fgetc(fp);
        } while (!(prev == '*' && c == '/') && c != EOF);
    } else {
        // Not a comment, just a '/'
        ungetc(c, fp);
    }
}

int main() {
    FILE *fp = fopen("input.c", "r");
    if (!fp) {
        printf("Cannot open file.\n");
        return 1;
    }

    int c;
    while ((c = fgetc(fp)) != EOF) {
        if (isspace(c))
            continue;

        // Identifiers or keywords
        if (isalpha(c) || c == '_') {
            char buf[100];
            int i = 0;
            buf[i++] = c;

            while (isalnum(c = fgetc(fp)) || c == '_')
                buf[i++] = c;

            buf[i] = '\0';
            ungetc(c, fp);

            if (isKeyword(buf))
                printf("Keyword: %s\n", buf);
            else
                printf("Identifier: %s\n", buf);
        }

        // Numbers
        else if (isdigit(c)) {
            char buf[100];
            int i = 0;
            buf[i++] = c;

            while (isdigit(c = fgetc(fp)))
                buf[i++] = c;

            buf[i] = '\0';
            ungetc(c, fp);
            printf("Number: %s\n", buf);
        }

        // Comments or division operator
        else if (c == '/') {
            int d = fgetc(fp);
            if (d == '/' || d == '*') {
                skipComment(fp);
            } else {
                ungetc(d, fp);
                printf("Operator: /\n");
            }
        }

        // Operators
        else if (strchr("+-*=%;(){}<>", c)) {
            printf("Operator: %c\n", c);
        }
    }

    fclose(fp);
    return 0;
}
