#include<stdio.h>
int main(){
    int a[20],n,i,j,temp;
    printf("enter the n");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //sorting using bubble sort
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;}

            printf("%d",a[j]);
        }
        printf(" %d\t",a[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
}