#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[4][4], row, col, i, j, count = 0;
    printf("Enter row : ");
    scanf("%d", &row);
    printf("Enter Columnc :");
    scanf("%d", &col);
    printf("Enter Element of Matrix1");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements are:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
                count++;
        }
    }
    if (count > ((row * col) / 2))
        printf("Matrix is a sparse matrix ");
    else
        printf("Matrix is not sparse matrix");
}