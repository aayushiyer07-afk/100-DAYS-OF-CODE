#include <stdio.h>

int main() {
    int n;
    int pos;
    int x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    
    for(int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    
    arr[pos - 1] = x;
    n++;

   
    printf("Array after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}