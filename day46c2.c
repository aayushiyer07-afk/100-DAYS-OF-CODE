//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {   

            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[i] == str[j]) {         
                    printf("First repeating lowercase alphabet: %c\n", str[i]);
                    return 0;
                }
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}