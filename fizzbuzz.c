#include<stdio.h>
int main(){
    int i,n;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%3==0 && i%5==0){
            printf(" fizzzbuzzz");
        }
        else if(i%5==0){
            printf(" BUZZ");
        }
        else if(i%3==0){
            printf(" fizz");
        }
        else{
            printf(" %d ",i);
        }
    }
}