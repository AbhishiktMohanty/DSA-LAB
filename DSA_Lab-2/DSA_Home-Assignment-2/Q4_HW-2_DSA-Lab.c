#include <stdio.h>
int main()
{
    int row = 3, col = 3;
    int a[row][col];
    int tr[row][col];

    printf("Enter the 3 X 3 Matrix : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int det = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1]) - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0]) + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    printf("\nDeterminant of the matrix is %d", det);
    return 0;
}