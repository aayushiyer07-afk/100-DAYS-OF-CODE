#include <stdio.h>

int main() {
    int n, a, b, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = n;

    while(a > 0) {
        b = a % 10;

        fact = 1;
        for(int i = 1; i <= b; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        a = a/ 10;
    }

    if(sum == n)
        printf("%d is a Strong Number.", n);
    else
        printf("%d is not a Strong Number.", n);

    return 0;
}