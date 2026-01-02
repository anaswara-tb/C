#include<stdio.h>
int main(){
    int i ,n, k=0,nums[10],flag=0,j;
    printf("enter the no:");
    scanf("%d",&n);
    printf("enter the array:");
        for(i=0;i<n;i++){
            scanf("%d",&nums[i]);
        }
        for(i=0;i<n;i++){
            for(j=i-1;j<n;j++){
                if(nums[i]=nums[j]){
                    nums[k++]=nums[i];
                    flag++;
                }
                if(flag>n/2){
                    printf("%d",nums[k]);
                }
            }
        }    
}