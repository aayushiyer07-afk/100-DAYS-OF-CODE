#include <stdio.h>
int main(){
    int r,c;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d",&r,&c);
    int arr1[r][c];
    int arr2[r][c];
    printf("Enter elements of first matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the elements of second matrix: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int arr3[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr3[i][j]=arr1[i][j] + arr2[i][j];
            printf("%d ",arr3[i][j]);
        }printf("\n");
    }
   return 0; 
}