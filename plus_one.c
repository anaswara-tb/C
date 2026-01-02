#include<stdio.h>
int main(){
    int digits[10],i,result[10],n;
    printf("enter length of array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&digits[i]);
    }
    printf("The resulted array after one adding at the end element:");
    for(i=0;i<n;i++){
        for(i=0;i<n-1;i++){
           printf(" %d",digits[i]); 
        }
        if(digits[i]+1!=10){
        printf(" %d",digits[i]+1);
        }
        else {
            printf(" %d %d",1,0
            );
        }
    }
}