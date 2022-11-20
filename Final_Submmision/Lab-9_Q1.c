// 1. WAP to read an array of integers and search for an element using linear search.

#include <stdio.h>

int main()
{
    int arr[25], i, key, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
        if (arr[i] == key)
            break;

    if (i < n)
        printf("\nElement found at position %d", i+1);
    else
        printf("\nElement not found");

    return 0;
}