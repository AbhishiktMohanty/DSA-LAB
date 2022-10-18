//HOME ASSIGNMENT
//Q3

#include <stdio.h>

int main(){
    //input
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    //sorting
    for (i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // replacing 
    for (i = 0; i < n; i++){
        if (i < n && (i + 1) == n){
            a[i] = a[0];
        }
        else{
            a[i] = a[i + 1];
        }
    }
    // printing
    printf("\nAfter replacing every element in the array with the next greatest element present in the same array is:\n");
    for (i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}