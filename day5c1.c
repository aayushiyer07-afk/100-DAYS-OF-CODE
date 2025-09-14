#include <stdio.h>
#include <math.h>
int main(){
    float P,R,T;
    printf("Enter principle amount : \n");
    scanf("%f",&P);
    printf("Enter rate : \n");
    scanf("%f",&R);
    printf("Enter time : \n");
    scanf("%f",&T);
    float SI= P*R*T/(100);
    float CI=P*(pow(1+R/100,T)-1);
    printf("The simple interest is : %f \n",SI);
    printf("The compound interest is : %f \n",CI);
    return 0;

}