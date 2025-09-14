#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter second number : \n");
    scanf("%d",&b);
    printf("Enter third number : \n");
    scanf("%d",&c);
if(a>b && a>c){
    printf(" First number is greatest.");
} else if(b>c){
    printf("Second number is greatest.");
}else{
    printf("Third number is greatest.");
}
return 0;
}