#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    char day[3], year[5];
    printf("Enter date in format dd/04/yyyy: ");
    scanf("%s", input);
    strncpy(day, input, 2);
    day[2] = '\0';
    strncpy(year, input + 4, 4);
    year[4] = '\0';
    printf("Converted format: %s-Apr-%s\n", day, year);
    return 0;
}