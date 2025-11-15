#include <stdio.h>
int main(){
    int n;
    int pal=0;
    int digit;
    
    printf("Enter the number : \n");
    scanf("%d",&n);
    int original=n;
    while(n>0){
        digit=n%10;
        pal=pal*10+digit;
        n=n/10;
    }if(original==pal){
        printf("The number %d is a palindrome",original);
    }else{
        printf("The number %d is not a palindrome",original);
    }
    return 0;
}