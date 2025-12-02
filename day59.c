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

    int maxSum = -999999, currentSum;

    
    for (i = 0; i <= n - k; i++) {
        currentSum = 0;
        for (j = i; j < i + k; j++) {
            currentSum += arr[j];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarrays of size %d: %d\n", k, maxSum);

    return 0;
}