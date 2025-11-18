#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   
 for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &x);

    int i;
    
    for( i = n - 1; i >= 0 && arr[i] > x; i--) {
        arr[i + 1] = arr[i];   
    }

    arr[i + 1] = x; 
    n++;    

    printf("Arrayafter insertion: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}