#include<Stdio.h>
#include<math.h>
int main(){
    int price[20],i,n,j,a[5],min_price=100000,max_price=0;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the prices:");
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    for(i=0;i<n;i++){
        if(min_price>price[i]){
            min_price=price[i];
        }
        else if(price[i]-min_price>max_price){
            max_price=price[i]-min_price;
        }
        
    }
    printf("max price is %d",max_price) ;
    
}