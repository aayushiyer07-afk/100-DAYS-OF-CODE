#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];
    int rowSum[rows];

   
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0;    
        for(int j = 0; j < cols; j++) {
            rowSum[i] += a[i][j];
        }
    }

   
    printf("\nSum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}