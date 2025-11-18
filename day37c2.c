#include <stdio.h>
int main(){
    int r,c;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&r,&c);
   int arr[r][c];
    printf("Enter the elements of the matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The transpose of the matrix is: ");
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            printf("%d ",arr[i][j]);
        }printf("\n");
    }
    return 0;
}