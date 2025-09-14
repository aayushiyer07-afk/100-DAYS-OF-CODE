#include <stdio.h>
int main(){
    int n;
    printf("Enter number till which you want to find sum : \n");
    scanf("%d",&n);
    int sum=n*(n+1)*0.5;
    printf("The sum of first n numbers is : %d \n",sum);
    return 0;
}