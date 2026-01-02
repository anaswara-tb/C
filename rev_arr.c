#include<stdio.h>
int main(){
    int a[10],i,n;
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter array:");
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    printf("the reverse:");
    for(i=n;i>=1;i--){
        printf("\t%d",a[i]);
    }
}