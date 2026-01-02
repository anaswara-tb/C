#include<stdio.h>
int main(){
    int a[10],n,i,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    printf("array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
        
    }
    printf("sum is %d",sum);
    printf("\naverage is %d",sum/n);
    
}