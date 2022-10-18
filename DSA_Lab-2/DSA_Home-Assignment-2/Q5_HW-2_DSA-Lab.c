#include <stdio.h>

int max(int a, int b)
{
    return a > b ? a : b;
}

int findmax(int A[], int n)
{
    if (n == 1)
    {
        return A[0];
    }
    return max(A[n - 1], findmax(A, n - 1));
}

int main()
{
    int n;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    printf("Largest number is %d", findmax(a, size));
}