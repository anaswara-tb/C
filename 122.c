#include<Stdio.h>
#include<math.h>
int main(){
    int price[20],i,n,j,a[5],max_price=0;
    printf("enter the number :");
    scanf("%d",&n);
    printf("enter the prices:");
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    for(i=1;i<n;i++){
        if(price[i]>price[i-1]){
            max_price+= price[i]-price[i-1];
        }
    }
    printf("max profit is %d",max_price);
    
}
