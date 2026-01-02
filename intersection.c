#include<stdio.h>
int main(){
    int i,j,a[10],b[10],n1,n2;
    printf("enter the size of a:");
    scanf("%d",&n1);
    printf("enter the array:");
    for(i=0;i<n1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the size of b:");
    scanf("%d",&n2);
    printf("enter the array:");
    for(i=0;i<n2;i++){
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(a[i]==b[j]&&a[j]==b[i]){
                printf("%d ",a[i]);
            }

        }

    }
}