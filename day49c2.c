//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    
    name[strcspn(name, "\n")] = '\0';

    
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    if (name[0] != ' ' && name[0] != '\0')
        printf("%c. ", name[0]);  

    for (i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            printf("%c. ", name[i + 1]);  
        }
    }


    if (lastSpace != -1) {
        printf("%s\n", &name[lastSpace + 1]);
    } else {
        
        printf("%s\n", name);
    }

    return 0;
}