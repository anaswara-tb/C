#include<stdio.h>
#include<math.h>
int happy_num(int n);
int main(){
    int n,j;
    printf("enter the num");
    scanf("%d",&n);
    happy_num(n);
}
 int happy_num(int p){
    int digit[p],i=0,j,sum=0;
    int temp=p;
    while(temp>0){
        digit[i]=temp % 10;
        temp=temp/10;
        i++;  
    }   
    for(j=i-1;j>=0;j--){
         sum=sum+digit[j]*digit[j];
    }
        if(sum==1){
            printf("true");
            return 1;   
        }
        else if (sum == 4) {  // 4 is known cycle number in unhappy numbers
        printf("false\n");
        return 0;
         } 
         else 
         {
        return happy_num(sum);
    }
    //printf("%d",sum);
} 
   
the minimal solution


int happy_num(int p);

bool isHappy(int n) {
    return happy_num(n);
}

int happy_num(int p) {
    int sum = 0, digit;

    while (1) {
        sum = 0;
        while (p > 0) {
            digit = p % 10;
            sum += digit * digit;
            p /= 10;
        }

        if (sum == 1)
            return 1;
        else if (sum == 4)
            return 0;
        else
            p = sum;
    }
}
