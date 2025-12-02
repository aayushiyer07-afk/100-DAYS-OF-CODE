#include <stdio.h>

int main() {
    int n, target, i;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter sorted array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target value: ");
    scanf("%d", &target);
    
    int first = -1, last = -1;
    
    
    for (i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    
    if (first == -1)
        printf("Output: -1, -1\n");
    else
        printf("First occurrence index: %d\nLast occurrence index: %d\n", first, last);

    return 0;
}