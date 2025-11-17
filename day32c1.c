#include <stdio.h>

int main() {
    int n, m;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n);

    int arr1[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &m);

    int arr2[m];
    for(int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n + m];

    for(int i = 0; i < n; i++) {
        merged[i] = arr1[i];
    }

    for(int i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }
     printf("Merged array: ");
    for(int i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}