#include<stdio.h>
int main(){
    int x,i,found=0;
printf("enter the number:");
scanf("%d",&x);
for(i=1;i*i<=x;i++){
    if(i*i==x){
        printf("%d",i);
       found=1;
       break;
    }
      
    }
    if(!found){
        printf("%d",i-1);
    }
}