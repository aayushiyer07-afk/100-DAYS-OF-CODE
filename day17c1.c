#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int digit;
    int num;
    
    int arm=0;
    printf("Enter number : \n");
    scanf("%d",&n);
    int original=n;
    printf("Enter number of digits : \n");
    scanf("%d",&num);
    while(n>0){
        digit=n%10;
        arm=pow(digit,num) +arm;
        n=n/10;
         }if(original==arm){
            printf("The number %d is a armstrong number",original);
         }else{
            printf("The number %d is not an armstrong number",original);
         }
return 0;
}