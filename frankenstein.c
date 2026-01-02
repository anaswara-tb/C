#include<stdio.h>
#include<string.h>

int main(){
    int N;
    printf("enter the Number Of Recipes:");
    scanf("%d",&N);
    getchar();
    char str[N][100],target[20];
    for(int i=0;i<N;i++){
        printf("enter recipe %d : " ,i+1);
        fgets(str[i],sizeof(str[i]),stdin);
        str[i][strcspn(str[i], "\n")]=0;

    }
    printf("The target:" );
    scanf("%s",&target);
}