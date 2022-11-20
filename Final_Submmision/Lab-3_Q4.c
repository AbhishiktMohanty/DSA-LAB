//Q4 WAP to find the transpose of a matrix.
//All ok

// #include <stdio.h>
// #include <stdlib.h>

int main_3_4()
{
    int row, col;
    printf("Enter the number of rows in matrix : ");
    scanf("%d", &row);
    printf("Enter the number of columns in matrix : ");
    scanf("%d", &col);
    printf("\n");
    printf("Enter the elements of the matrix :\n");

    int **matrix = (int **)malloc(row * sizeof(int));
    for (int i = 0; i < row; i++)
        matrix[i] = (int *)malloc(col * sizeof(int));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int newRow = col;
    int newCol = row;
    int **matrixNew = (int **)malloc(newRow * sizeof(int));
    for (int i = 0; i < newRow; i++)
        matrixNew[i] = (int *)malloc(newCol * sizeof(int));

    for (int i = 0; i < newRow; i++)
    {
        for (int j = 0; j < newCol; j++)
        {
            matrixNew[i][j] = matrix[j][i];
        }
    }

    printf("\nThe Given Matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%02d  ", matrix[i][j]);

        printf("\n");
    }

    printf("\nThe Transpose of the matrix :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%02d  ", matrixNew[i][j]);

        printf("\n");
    }

    return 0;
}