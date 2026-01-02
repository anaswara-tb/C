#include<stdio.h>
int main(){
    int m,n,nums1[10],nums2[10],i,j,k=0;

    printf("enter the size of 1st array:");
    scanf("%d",&m);
    printf("enter the array:");
    for(i=0;i<m;i++){
        scanf("%d",&nums1[i]);
    }
     printf("enter the size of 2nd array:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&nums2[i]);
    }
    int result[20];
    i=0;
    j=0;
    while(i<m&&j<n){
        if(nums1[i]<nums2[j]){
            result[k++]=nums1[i++];
        }else{
            result[k++]=nums2[j++];
        }
    }
    while (i<m)
    {
        result[k++]=nums1[i++];
    }
    while (j<n)
    {
        result[k++]=nums2[j++];
    }
    
    
    for(i=0;i<k;i++){
        printf("%d",result[i]);
    }
}