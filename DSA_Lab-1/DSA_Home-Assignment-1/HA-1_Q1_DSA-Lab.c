//HOME ASSIGNMENT
//Q1
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1; j<n ;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The second smallest element is %d",a[n-2]);
    printf("\n");
    printf("The second largest element is %d",a[1]);
    return 0;
}