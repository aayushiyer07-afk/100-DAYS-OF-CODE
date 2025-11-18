#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &n);
    int matrix[n][n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) 
    {for (int j = 0; j < n; j++) 
        {
            
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += matrix[i][i];
    }
    printf("%d", sum);

}
