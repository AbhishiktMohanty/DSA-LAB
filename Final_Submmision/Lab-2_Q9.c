// #include <stdio.h>
// #include <stdlib.h>

int main_2_9()
{
    int row, col, i, j, a[10][10], count = 0;
    printf("Enter number of row: ");
    scanf("%d", &row);
    printf("Enter number of Column: ");
    scanf("%d", &col);
    printf("Enter element of the Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Elements are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
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
        printf("Matrix is a sparse matrix.\n");
    else
        printf("Matrix is not sparse matrix.\n");
}