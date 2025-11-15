//Write a program to check if a number is prime.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter number :\n");
    scanf("%d",&n);
    if (n<2){
        printf("The number is not prime");
    }else{
    for(int i=2;i*i <= n;i++){
        if (n%i==0){
            printf("The number is not prime.");
        }else{
            printf("The number is prime.");
        }
    }}
return 0;
}