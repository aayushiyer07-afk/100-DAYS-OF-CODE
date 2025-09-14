#include <stdio.h>
int main(){
    int temp;
    printf("Enter temperature (in celcius) : \n");
    scanf("%d",&temp);
    float far=1.8*(temp +32);
    printf("The temperature in farenheit is : %f \n",far);
return 0;
}