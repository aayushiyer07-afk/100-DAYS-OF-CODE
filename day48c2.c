//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);  
            start = i + 1;              
        }

        i++;
    }

    printf("Result: %s", str);

    return 0;
}