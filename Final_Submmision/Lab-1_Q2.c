//Q2
// #include<stdio.h>

int main_1_2() 
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