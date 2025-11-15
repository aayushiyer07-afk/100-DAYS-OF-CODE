#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    int product=1;
    while(n>0){
    int a=n%10;
    if(a%2!=0){
     product=product*a;
     n=n/10;
    }else{
        n=n/10;
            }}
    printf("The product of the digits at odd places of the number is:%d",product);
    return 0;
}