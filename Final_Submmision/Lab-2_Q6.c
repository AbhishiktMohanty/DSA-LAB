// #include <stdio.h>
// #include <stdlib.h>

struct array_2_6
{
    int a;
    int sum;
};

int main_2_6()
{
    int n;
    printf("Enter the length of the array : ");
    scanf("%d", &n);
    struct array_2_6 *ptr;
    ptr = (struct array_2_6 *)malloc(n * sizeof(struct array_2_6));
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(ptr + i)->a);
    }
    
    ptr->sum = 0;
    for (int i = 0; i < n; i++)
    {
        ptr->sum += (ptr + i)->a;
    }
    
    printf("Elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", (ptr + i)->a);
    }
    printf("\n");
    printf("Sum of the elements is %d", ptr->sum);
    return 0;
}