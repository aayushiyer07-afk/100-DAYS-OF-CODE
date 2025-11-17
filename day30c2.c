#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int positive=0,negative=0,zero=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative=negative+1;
        }else if(arr[i]>0){
            positive=positive+1;
        }else{
            zero=zero+1;
        }
    }
    printf("The number of positive numbers is: %d",positive);
    printf("The number of negative numbers: %d",negative);
    printf("The number of zeroes in the array: %d",zero);
    return 0;
}