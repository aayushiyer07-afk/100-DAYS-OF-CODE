//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main(){
    float SP,CP;
    printf("Enter cost price : \n");
    scanf("%f",&CP);
printf("Enter selling price :\n");
scanf("%f",&SP);
float profitper= ((SP - CP)/CP)*100;
float lossper= ((CP-SP)/CP)*100;
if(SP>CP){
    printf("Profit percentage is : %.2f",profitper);
    
}
else if(CP=SP){
    printf("No profit No loss");
}else{
    printf("Loss percentage is : %.2f",lossper);
}
return 0;
}