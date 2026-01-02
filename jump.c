#include<stdio.h>
int main(){
    int i,j,a[10],n;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    int  maxReach=0;   
    for(i=0;i<n;i++){
        if (i > maxReach)
            printf("false");
        else
            if (i + a[i] > maxReach)
                maxReach = i + a[i];
            }
    if (maxReach >= n-1)
    printf( "true");
        else
    printf("false");

    }
