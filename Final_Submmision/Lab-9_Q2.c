// 2. WAP to read an array of integers and search for an element using binary search.

#include <stdio.h>

int main()
{
    int i, low, high, mid, n, key, arr[25];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements in the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] < key)
            low = mid + 1;
        else if (arr[mid] == key)
        {
            printf("%d found at position %d\n", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list\n", key);
    return 0;
}