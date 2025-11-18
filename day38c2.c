#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r != c){
        printf("Matrix must be square to be symmetric.\n");
        return 0;
    }

    int arr1[r][c], arrt[r][c];

    printf("Enter the elements of matrix:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

   
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            arrt[j][i] = arr1[i][j];
        }
    }

    int symmetric = 1;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(arr1[i][j] != arrt[i][j]) {
                symmetric = 0;
                break;
            }
        }
    }
if(symmetric)
        printf("The matrix is symmetric.");
    else
        printf("The matrix is not symmetric.");

return 0;
}