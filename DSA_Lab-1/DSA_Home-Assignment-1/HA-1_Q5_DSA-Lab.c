//HOME ASSIGNMENT
//Q5

#include<stdio.h>

int main(){
    //input in program
    int r,c;
    printf("Enter number of rows and columns in the array: ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int i,j;
    //input in array 
    printf("Enter the elements of the array : \n");
    for (i = 0; i < r;i++){
        for (j = 0; j < c; j++){
            scanf("%d",&a[i][j]);
        }
    }
    //sorting of row array
    int k;
    for (k = 0; k < r; k++){
        for (i = 0; i < c; i++){
            for (j = (i + 1); j < c; ++j){
                if (a[k][i] > a[k][j]){
                    int swap = a[k][i];
                    a[k][i] = a[k][j];
                    a[k][j] = swap;
                }
            }
        }
    }
    // sorting of coloumn array
    for (j = 0; j < c; ++j){
        for (i = 0; i < r; ++i){
            for (k = i + 1; k < r; ++k){
                if (a[i][j] < a[k][j]){
                    int temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
                }
            }
        }
    }
    // printing of array 
    printf("\nAfter sorting array by rows in ascending & columns in decending order:\n");
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}