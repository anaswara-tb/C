#include<stdio.h>
int main(){
    int i,n,k=0,nums[10],val;
    printf("enter the no :");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("enter remove element:");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(nums[i]!=val){
            nums[k++]=nums[i];
            //flag++;
        }
       
    }
    for(i=0;i<k;i++){
        printf("  %d",nums[i]);
    }
    
    printf("\n%d",k);
}