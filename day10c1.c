#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter first side of triangle :");
    scanf("%d",&a);
    printf("Enter seconf side of triangle :");
    scanf("%d",&b);
    printf("Enter third side of triangle :");
    scanf("%d",&c);
    if(a==b && b==c){
        printf("Triangle is equilateral.");
    }else if(a==b || b==c || a==c){
        printf("Triangle is isosceles.");
    }else{
        printf("Triangle is scalene.");
    }
    return 0;
}