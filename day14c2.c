#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++){
        if(i%2==0){
        product=product*i;
        }
    }printf("Product of the first n numbers : %d \n");
    return 0;
}