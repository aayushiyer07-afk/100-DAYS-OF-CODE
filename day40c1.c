#include <stdio.h>
int main() 
{
    int r, c;
    printf("ENter the number of rows and columns : ");
    scanf("%d %d", &r, &c);
    int matrix[r][c];
    printf("Enter the elements: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int sum = 0; sum <= r + c - 2; sum++) 
    {
        for (int i = 0; i < r; i++) 
        {
            int j = sum - i;
            if (j >= 0 && j < c) 
            {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    return 0;
}