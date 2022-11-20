// Q3. WAP to check whether the given matrix is sparse matrix or not.
//All Ok

// #include<stdio.h>
// #include<stdlib.h>

int main_3_3()
{
    int row,col;
    printf("Enter number of row : ");
    scanf("%d",&row);
    printf("Enter number of column : ");
    scanf("%d",&col);
    int *arr[row][col];
    int i,j,count;
    printf("Enter the matrix : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arr[i][j] = (int *)malloc((row * col)*sizeof(int));
            scanf("%d",&(*arr[i][j]));
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(*arr[i][j] == 0)
            {
                count++;
            }
        }
    }
    if(count > (row*col)/2)
    {
        printf("Entered Matrix is sparse matrix\n");
    }
    else
    {
        printf("Entered Matrix is not a sparse matrix\n");
    }
    return 0;
}