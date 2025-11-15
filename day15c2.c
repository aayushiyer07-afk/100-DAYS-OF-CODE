//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n;
    int rev=0;
    int digit;
    printf("Enter number : \n");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
        
    }printf("Reversed number is : %d",rev);
    return 0;
}