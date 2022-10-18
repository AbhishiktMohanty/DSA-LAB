/*Q8. WAP to determine whether the given matrix is a lower triangular or upper triangular or
tri-diagonal matrix.*/
//All Ok

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col;
    printf("Enter the number of row : ");
    scanf("%d", &row);
    printf("Enter the number of column : ");
    scanf("%d", &col);
    int *arr = (int *)malloc(row * col * sizeof(int));
    int count = 0;
    printf("Enter the array : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &*(arr + i * col + j));
        }
    }
    printf("\n");
    int flag1 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                if (*(arr + i * col + j) != 0)
                {
                    flag1 = -1;
                }
            }
        }
    }
    if (flag1 == 0)
    {
        printf("The matrix is Lower Matrix.\n");
    }
    else
    {
        printf("The matrix is not Lower Matrix.\n");
    }
    int flag2 = 0;
    int c = col - 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = c--; j < col; j++)
        {
            if (i > j)
            {
                if (*(arr + i * col + j) != 0)
                {
                    flag2 = -1;
                }
            }
        }
    }
    if (flag2 == 0)
    {
        printf("The matrix is Upper Matrix.\n");
    }
    else
    {
        printf("The matrix is not Upper Matrix.\n");
    }
    int flag3 = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                if (*(arr + i * col + j) != 0)
                {
                    flag3 = -1;
                }
            }
            else if (i > j)
            {
                if (*(arr + i * col + j) != 0)
                {
                    flag3 = -1;
                }
            }
        }
    }
    if (flag3 == 1)
    {
        printf("The matrix is Tri-diagonal Matrix.\n");
    }
    else
    {
        printf("The matrix is not a Tri-diagonal Matrix.\n");
    }
    return 0;
}