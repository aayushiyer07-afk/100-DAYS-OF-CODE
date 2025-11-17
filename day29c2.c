#include <stdio.h>
int main(){
    int n ,i;
    printf("Enter the elements: ");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int max=arr[0];
for( i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}printf("The maximum number is:%d",max);
int min=arr[0];
for( i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}printf("The minimum number is:%d",min);
return 0;
}