//Q6. WAP to Find Largest Element in an Array using Recursion.
//All Ok

// #include <stdio.h>
// #include<stdlib.h>

void largest_3_6(int *num, int n, int lar)
{
    if (n < 0)
        printf("largest element is %d\n", lar);
    else
    {
        if (*num > lar)
            lar = *num;
        largest_3_6(++num, --n, lar);
    }
}

int main_3_6()
{
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);
    int *a = (int *)malloc(length*sizeof(int));
    int i;
    printf("Enter the elements: ");
    for (i = 0; i < length; i++)
        scanf("%d", &a[i]);

    largest_3_6(a, length - 1, a[0]);

    return 0;
}