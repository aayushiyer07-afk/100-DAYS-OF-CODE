//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        }
        else {  
            word[j] = '\0';   

            if (j > max) {    
                max = j;
                int k = 0;
                while (word[k] != '\0') {
                    longest[k] = word[k];
                    k++;
                }
                longest[k] = '\0';
            }

            j = 0;  
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}