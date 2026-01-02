#include<stdio.h>
int main(){
    int num,i,a[10],j;
    printf("enter the number:");
    scanf("%d",&num);
    for(i=1;i<num/2;i++){
        if(num/i==0){
            a[i]++;
        }
    }
    for(i=1;i<num/2;i++){
        printf("%d\n",a[i]);
    }
}