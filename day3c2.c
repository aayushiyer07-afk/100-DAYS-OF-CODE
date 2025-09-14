#include <Stdio.h>
int main(){
    int a,b;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    int c=a;
    a=b;
    b=c;
    printf("Swapped value of first number is %d \n",a);
    printf("Swapped value of second number is %d \n",b);
    return 0;
}