//HOME ASSIGNMENT
//Q4

#include<stdio.h>

int main(){
    //input 
    int n;
    printf("Enter the number of elements on the array: ");
    scanf("%d",&n);
    //array 
    int a[n];
    int b[n];
    printf("Enter the elements of the array: ");
    int i;
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    b[0] = a[1];
    //multiplication
    for ( i = 0; i < n; i++){
        if (i>0 && i<n){
            b[i] = a[i-1] * a[i+1];            
        }
        if (i<n && (i+1) == n){
            b [i] = a[i-1];
        }
        
    }
    //printing
    printf("\nResult after replacing every array elements by multiplication of previous and next of an array element:\n");
    for ( i = 0; i < n; i++){
        printf("%d\t",b[i]);
    }

    return 0;
}