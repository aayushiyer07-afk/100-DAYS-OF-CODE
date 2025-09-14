#include <stdio.h>
int main() {
    int a,b,c,d,e,f;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter the second number : \n");
    scanf("%d",&b);
    c= a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    printf("The sum of the numbers is : %d \n",c);
    printf("The difference of the numbers is : %d \n",d);
    printf("The product of the numbers is : %d \n",e);
    printf("The quotient of the numbers is : %d \n",f);
    return 0;

}