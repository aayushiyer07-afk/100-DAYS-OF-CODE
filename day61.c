#include <stdio.h>

int main() {
    int n, k, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid k value.\n");
        return 0;
    }

    printf("First negative in each window: ");

    
    for (i = 0; i <= n - k; i++) {
        int found = 0;

        
        for (j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break; 
            }
        }

        if (!found)
            printf("0 "); 
    }

    return 0;
}
