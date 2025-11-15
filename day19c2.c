#include <stdio.h>
int main(){
    int n;
    printf("Enter number :\n");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
     sum=sum+(n%10);
     n=n/10;
    }
    printf("The sum of the digits of the number is : %d",sum);
    return 0;

}