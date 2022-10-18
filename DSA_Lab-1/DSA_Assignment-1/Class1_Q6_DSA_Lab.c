//Q6
#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++){
    	scanf("%d", &array[i]);
	}
    int GreaterThanElement;
    int TheGreaterThan;
    printf("\n\tElement\t\tNGE\n");
    for (int i = 0; i < n; i++){
        TheGreaterThan = 0;
        GreaterThanElement = array[i];
        for (int j = i; j < n; j++){
            if (GreaterThanElement < array[j]){
                GreaterThanElement = array[j];
                TheGreaterThan++;
                break;
            }
        }
        if (TheGreaterThan != 0)
            printf("\t  %d\t\t%d\n", array[i], GreaterThanElement);
        else
            printf("\t  %d\t\t%d\n", array[i], -1);
    }
    return 0;
}