#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10

void main()
{
  int a[MAXSIZE];
  int i, n, power;
  float x, polySum;
  printf("Enter the order of the polynomial: ");
  scanf("%d", & n);
  printf("Enter the value of x: ");
  scanf("%f", & x);


  printf("Enter %d coefficients: ", n + 1);
  for (i = 0; i <= n; i++) {
    scanf("%d", & a[i]);
  }
  polySum = a[0];
  for (i = 1; i <= n; i++) {
    polySum = polySum * x + a[i];
  }
power = n;
 
    printf("Given polynomial is: ");
    for (i = 0; i <= n; i++)
    {
        if (power < 0)
        {
            break;
        }
        
        if (a[i] > 0 & i!=0)
            printf(" + ");
        else if (a[i] < 0)
            printf(" - ");
        else
            printf(" ");
        printf("%dx^%d  ", abs(a[i]), power--);
  }
  printf("\nSum of the polynomial = %6.2f\n", polySum);
}