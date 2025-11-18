#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int l = 0, h = n - 1, m;
    int found = 0;

    while(l <= h){
        m = (l + h) / 2;

        if(arr[m] == key){
            found = 1;
            break;
        }
        else if(arr[m] < key){
            l = m + 1;
        }
        else{
            h = m - 1;
        }
    }

    if(found)
        printf("Element found at index %d", m);
    else
        printf("Element not found.");

    return 0;
}