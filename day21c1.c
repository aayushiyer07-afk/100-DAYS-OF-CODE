#include <stdio.h>
int main(){
    int n;
    int digit;
    printf("Enter number:\n ");
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        n=n/10;
       printf("%d",digit); 
        
    
    }
    return 0;
}