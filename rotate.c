#include <stdio.h>

int main() {
    int nums[100], res[100];
    int n, k, i, w = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;
    for(i = n - k; i < n; i++) {
        nums[w++] = nums[i];
    }
    for(i = 0; i < n - k; i++) {
        nums[w++] = nums[i];
    }
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
