#include <stdio.h>
int main(){
    int r;
    printf("Enter radius of the circle(in cm) : ");
    scanf("%d",&r);
    float area= 3.14 *r*r;
    float cir= 3.14*2*r;
    printf("The area of the circle is : %f \n",area);
    printf("The circumference of the circle is : %f \n",cir);
    return 0;
}