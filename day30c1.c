#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }else{
            odd=odd+1;
        }
    }
    printf("The number of even numbers is: %d",even);
    printf("The number of odd numbers is:%d",odd);
return 0;
}