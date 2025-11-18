#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] < max1 && a[i] > max2) {
            max2 = a[i];
        }
    }

    if(max2 == INT_MIN) {
        printf("All elements are duplicates.");
    } else {
        printf("Second largest = %d", max2);
    }

    return 0;
}