#include <stdio.h>

struct Distance
{
  int km;
  float mtr;
} firstDistance, secondDistance, sum;

int main()
{
  printf("Enter kilo-meter and meter(up to 2 digit places) for the first distance with a space : ");
  scanf("%d %f", &firstDistance.km, &firstDistance.mtr);
  printf("Enter kilo-meter and meter(up to 2 digit places) for the second distance with a space : ");
  scanf("%d %f", &secondDistance.km, &secondDistance.mtr);

  sum.km = firstDistance.km + secondDistance.km;
  sum.mtr = firstDistance.mtr + secondDistance.mtr;

  while (sum.mtr >= 100)
  {
    sum.mtr = sum.mtr - 100;
    sum.km++;
  }

  printf("Sum is %d kilo-meter, %.2f meter\n", sum.km, sum.mtr);

  return 0;
}