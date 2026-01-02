#include<Stdio.h>
int main(){
    int a[10],i,sum[10];
    printf("enter a array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the resulted array:");
    for(i=0;i<5;i++){
        printf("\nsum[%d]=%d",i,a[i]+1);
    }
}