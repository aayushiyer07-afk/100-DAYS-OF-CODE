#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
   int  arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+ arr[i];
    }
    printf("The sum of the elements is: %d",sum);
    return 0;
}