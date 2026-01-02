#include<stdio.h>
int main(){
    int i,j,num_size,target,nums[10],returnsize;
    printf("enter num_size:");
    scanf("%d",&num_size);
    printf("enter the array");
    for(i=1;i<=num_size;i++){
        scanf("%d",&nums[i]);
    }
    printf("enter the target:");
    scanf("%d",&target);
    for(i=1;i<=num_size;i++){
        for(j=i+1;j<=num_size;j++){
            if(nums[i]+nums[j]==target){
                printf("%d %d",i,j);
                
            }
        }
    }


}    