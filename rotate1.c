#include <stdio.h>
#include <stdlib.h>

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k <= 0) {
        return;
    }
    int* temp = (int*) malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        temp[i] = nums[i];
    }
    int i, j;
    for (i = 0, j = numsSize - k; i < k && j < numsSize; i++, j++) {
        nums[i] = temp[j];
    }
    for (i = k, j = 0; i < numsSize && j < numsSize - k; i++, j++) {
        nums[i] = temp[j];
    }
    free(temp);
}
