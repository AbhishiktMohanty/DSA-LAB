//Q7 WAP using function to find frequency of occurrence of numbers in an array.
//All Ok

// #include <stdio.h>
// #include <stdlib.h>

void freqOfOccur_3_7(int *arr, int len)
{
    int *newArr = (int *)malloc(len * sizeof(int));
    for (int i = 0; i < len; i++)
        newArr[i] = arr[i];

    int *freqArr = (int *)malloc(len * sizeof(int));

    for (int i = 0; i < len; i++)
    {
        int num = arr[i];
        int numOfOccur = 0;
        int firstOccur = 0;

        for (int j = 0; j < len; j++)
        {
            if (num == arr[j])
            {
                numOfOccur++;
                firstOccur++;

                if (firstOccur > 1)
                    arr[j] = 0;
            }
        }
        freqArr[i] = numOfOccur;
    }
    
    printf("\nThe given array : {");
    for (int i = 0; i < len; i++)
        printf("%d, ", newArr[i]);
    printf("\b\b}");

    printf("\n\nThe number of occurances of elements :");

    for (int i = 0; i < len; i++)
    {
        if (arr[i] != 0)
            printf("\nOccurance of %d is %d times", arr[i], freqArr[i]);
    }
}

int main_3_7()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    freqOfOccur_3_7(arr, n);

    return 0;
}