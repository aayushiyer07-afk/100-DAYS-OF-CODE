#include <stdio.h>

int main() {
     long n;
    int arr[10] = {0};
    int d;
    int  maxDigit = 0;

    scanf("%lld", &n);

    if(n < 0) n = -n;   

    while(n > 0) {
        d = n % 10;
        arr[d]++;
        n /= 10;
    }

    for(int i = 1; i < 10; i++) {
        if(arr[i] > arr[maxDigit])
            maxDigit = i;
    }

    printf("Most frequent digit = %d", maxDigit);

    return 0;
}
