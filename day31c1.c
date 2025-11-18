#include <stdio.h>

int main() {
    int n, x, index = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &x);

    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            index = i;   
            break;
        }
    }
     if(index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found.");

    return 0;
}