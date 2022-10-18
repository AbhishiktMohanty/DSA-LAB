/*
//Q1
#include<stdio.h>
 
int main()
{
int a[50],i,n,large,small;
printf("Enter the number of elements in array: ");
scanf("%d",&n);
printf("Enter the Array: ");
 
for(i=0;i<n;++i)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
printf("The largest element is %d",large);
printf("\nThe smallest element is %d\n",small);
 
return 0;
}
*/
/*
//Q2
#include<stdio.h>

int main() 
{
    int a[100],reverse[100],i,n;
 
    printf("Enter number of elements in the array: ");    
    scanf("%d",&n);
    
    printf("Enter the elements of the array: ");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
 
    for(i=0;i<n;i++)
    {
        reverse[i]=a[n-i-1];
    }
 
   printf("Reversed content of the entered elements is:\n");
   for(i=0;i<n;i++) 
   {
      printf("%d ",reverse[i]);
   }
}
*/
/*
//Q3
#include <stdio.h>
 
int main() {
   int n, i, r, arr[30];
 
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);
 
   printf("Enter the array elements: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }
 
   printf("Enter the item to be searched: ");
   scanf("%d", &r);
 
   i = 0;
   while (i < n && r != arr[i]) {
      i++;
   }
 
   if (i < n) {
      printf("The element is found in the position = %d", i + 1);
   } else {
      printf("Element not found!");
   }
 
   return 0;
}
*/
/*
//Q4
#include <stdio.h>
int main(){
    int i, j, a, n, number[30];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
 
    printf("Enter the elements: ");
    for (i = 0; i < n; ++i)
	    scanf("%d", &number[i]);
 
    for (i = 0; i < n; ++i){
	    for (j = i + 1; j < n; ++j){
            if (number[i] > number[j]){
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
                }
 
            }
 
        }
    printf("The numbers arranged in ascending order are given below:\n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}
*/

//Q5
#include<stdio.h>

int main(){
    int a,b,n;
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    int i;
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After sorting of array: ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Number between %d and %d are : ",a,b);
    for(i=0;i<n;i++){
        if(arr[i]>a && arr[i]<b){
            printf("%d ",arr[i]);
        }
    }
}

