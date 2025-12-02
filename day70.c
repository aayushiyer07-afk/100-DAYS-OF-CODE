#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    str[strcspn(str, "\n")] = 0;

    int n = strlen(str);

    int newSentence = 1; 

    for (int i = 0; i < n; i++) {
        if (newSentence && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            newSentence = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            newSentence = 1;
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}
