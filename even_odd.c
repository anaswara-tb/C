#include<stdio.h>
int main(){
    int a[10],e=0,o=0,i,n;

    printf("enter the size:");
    scanf("%d",&n);
    printf("enter array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    printf("no of even nos is %d",e);
    printf("\nno of odd nos is %d",o);
}
