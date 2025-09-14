#include <stdio.h>
int main(){
    int l,b;
    printf("Enter length of rectangle : \n");
    scanf("%d",&l);
    printf("Enter breadth of rectangle : \n");
    scanf("%d",&b);
    int area=l*b;
    int per=2*(l+b);
    printf("The area of the rectangle is : %d \n",area);
    printf("The perimeter of the rectangle is : %d \n",per);
    return 0;
}