//Q5. WAP to find determinant of 3×3 Matrix.
//All OK
// #include <stdio.h>
// #include <stdlib.h>

int main_3_5()
{
    int row=3, col=3;
    int *arr = (int *)malloc(row * col * sizeof(int));
    int i, j, count;
    printf("Enter the Matrix : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &*(arr + i * col + j));
        }
    }
    int det = (*(arr + 0 * col + 0)) * ((*(arr + 1 * col + 1)) * (*(arr + 2 * col + 2)) - (*(arr + 1 * col + 2)) * (*(arr + 2 * col + 1))) - (*(arr + 0 * col + 1)) * ((*(arr + 1 * col + 0)) * (*(arr + 2 * col + 2)) - (*(arr + 1 * col + 2)) * (*(arr + 2 * col + 0))) + (*(arr + 0 * col + 2)) * ((*(arr + 1 * col + 0)) * (*(arr + 2 * col + 1)) - (*(arr + 1 * col + 1)) * (*(arr + 2 * col + 0)));
    printf("Determinant of the matrix is %d\n", det);
    return 0;
}