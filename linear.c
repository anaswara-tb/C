#include<stdio.h>
int main(){
    int i,a[10],n,e,found=0;
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the arary:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nenter the searching element:");
    scanf("%d",&e);
    for(i = 0; i < n; i++) {
    if(a[i] == e) {
        printf("Found at position %d\n", i+1);
        found = 1;
         }

        }
    
}