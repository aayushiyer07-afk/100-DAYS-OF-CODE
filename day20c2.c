#include <stdio.h>
int main(){
    int n;
    printf("Enter  binary number :\n");
    scanf("%d",&n);
    while(n>0){
        int a=n%10;
        if(a==1){
            printf("0");
        }else{
            printf("1");
        }
        n=n/10;
    }
return 0;
}