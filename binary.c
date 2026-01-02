#include<stdio.h>
int main(){
    int i,n,a[10],e,found=0;
    printf("enter the no:");
    scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element searching..");
    scanf("%d",&e);

    int low=0;
    int high=n-1;


    while(low<=high){
          int mid = (low + high) / 2;
       // printf("not found");
       if(a[mid]==e){
        printf("element founded at %d",i);
         found=1;
         break;
         
       }
       else if(e>a[mid]){
            low=mid+1;
       }
       else{
            high=high+1;
       }
    
    }
    if(!found){
        printf("not founded!!!");
    }

    

}