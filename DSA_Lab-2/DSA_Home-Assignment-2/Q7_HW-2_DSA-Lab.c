#include <stdio.h>

void lower(int row, int col, int a[row][col])
{
    int flag = 0;
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i < j)
            {
                if (a[i][j] != 0)
                {
                    flag = -1;
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("The matrix is Lower Matrix.");
    }
    else
    {
        printf("The matrix is not Lower Matrix.");
    }
    printf("\n");
};

void upper(int row, int col, int a[row][col])
{
    int flag = 0;
    int c = col - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = c--; j < col; j++)
        {
            if (i > j)
            {
                if (a[i][j] != 0)
                {
                    flag = -1;
                }
            }
        }
    }
    if (flag == 0)
    {
        printf("The matrix is Upper Matrix.");
    }
    else
    {
        printf("The matrix is not Upper Matrix.");
    }
    printf("\n");
};

void tri(int row, int col, int a[row][col])
{
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                if (a[i][j] != 0)
                {
                    flag = -1;
                }
            }
            if (i > j)
            {
                if (a[i][j] != 0)
                {
                    flag = -1;
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("The matrix is Tri-diagonal Matrix.");
    }
    else
    {
        printf("The matrix is not a tri-diagonal Matrix.");
    }
    printf("\n");
};

int main()
{
    int col, row;
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of coloumn: ");
    scanf("%d", &col);
    int a[row][col];
    printf("Enter the Matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    lower(row, col, a);
    upper(row, col, a);
    tri(row, col, a);
    return 0;
}