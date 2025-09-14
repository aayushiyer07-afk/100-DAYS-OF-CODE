#include <stdio.h>
int main(){
    char ch;
    printf("Enter character : \n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Charachter is uppercase.");
    }else if(ch>='a' && ch<='z'){
        printf("Character is lowercase.");
    }else if(ch>='0' && ch<='9'){
        printf("Character is a digit.");
    }else {
        printf("Character is a special character.");
    }
return 0;
}