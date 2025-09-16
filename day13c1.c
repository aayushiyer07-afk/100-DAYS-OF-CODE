//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a,b;
    
    char operation;
    printf("If you want to perform addition enter S.\n");
    printf("If you want to perform subtraction enter M.\n");
    printf("If you want to perform multiplication enter P.\n");
    printf("If you want to perform division enter D \n");
    printf("If you want to find out remainder enter R \n");
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    printf("Enter operation you want to perform: \n");
    scanf("%c",&operation);
    switch(operation){
        case 'S':printf("Sum of the numbers is : %d",a+b);
        break;
        case 'M':printf("Subtraction of the numbers is : %d",a-b);
        break;
        case 'P':printf("Multiplication of the numbers is : %d",a*b);
        break;
        case 'D':printf("Division of the numbers is : %d",a/b);
        break;
        case 'R':printf("Remainder of the numbers is : %d",a%b);
        break;
        default:printf("Invalid");
        break;
    }
return 0;
}