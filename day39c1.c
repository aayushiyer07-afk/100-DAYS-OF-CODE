#include <stdio.h>
int main() 
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
printf("Enter the elements :");
    for (int i = 0; i < r; i++) 
    { for (int j = 0; j < c; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int distinct=1;
    for (int i = 0; i < r; i++) 
    {
        for (int j = i + 1; j < r; j++) 
        {
            if (arr[i][i] == arr[j][j]) 
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}