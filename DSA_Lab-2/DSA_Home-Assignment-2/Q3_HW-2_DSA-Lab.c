#include <stdio.h>
int main()
{
    int a[10][10], transpose[10][10], r, c;
    printf("Rows of the martix : ");
    scanf("%d", &r);
    printf("coloumn of the martix : ");
    scanf("%d", &c);

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            scanf("%d", &a[i][j]);
        }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}