#include<stdio.h>
#include<stdlib.h>


void occurance(int n, int freq[], int a[]){
    int Count;
    for (int i = 0; i < n; i++)
    {
        Count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                Count++;
                freq[j] = 0; 
            }
        }
        if (freq[i] != 0)
        {
            freq[i] = Count;
        }
    }
    printf("\nFrequency is \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d Occurs %d Times \n", a[i], freq[i]);
        }
    }
}

int main()
{
    int n;
    printf("Enter the length of the array : ");
    scanf("%d",&n);
    int a[n],freq[n];
    printf("Enter elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        freq[i] = -1;
    }
    occurance(n, freq, a);
    return 0;
}