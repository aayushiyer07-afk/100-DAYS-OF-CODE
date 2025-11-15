#include <stdio.h>
int main(){
    int hcf=1;
    int n1,n2;
    printf("Enter the value of n1 \n");
    scanf("%d",&n1);
    printf("Enter the value of n2 \n");
    scanf("%d",&n2);
    for(int i =1;i<=(n1<n2?n1:n2);i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    int lcm= (n1*n2)/hcf;
    printf("The lcm of the two numbers is %d",lcm);
    return 0;
}