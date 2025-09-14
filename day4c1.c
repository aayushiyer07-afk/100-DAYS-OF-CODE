#include <stdio.h>
int main(){
    int a,b;
    printf("Enter first number : \n");
    scanf("%d",&a);
printf("Enter second number : \n");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("Swapped value of first number is : %d \n",a);
printf("Swapped value of second number is : %d",b);
return 0;
}