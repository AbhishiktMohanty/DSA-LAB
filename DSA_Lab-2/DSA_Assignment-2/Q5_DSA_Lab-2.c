#include <stdio.h>
#include <stdlib.h>

struct student
{
  char name[100];
  int roll_number;
  int class;
  char section;
};

int main()
{
  int n;
  printf("Enter the number of students : ");
  scanf("%d", &n);
  struct student *ptr;
  ptr = (struct student *)malloc(n * sizeof(struct student));
  for (int i = 0; i < n; i++)
  {
    printf("\nEnter the deatil of student %d\n", i + 1);
    printf("Enter the name : ");
    scanf("%s", &(ptr + i)->name);
    printf("Enter the Roll number : ");
    scanf("%d", &(ptr + i)->roll_number);
    printf("Enter the class (in number) : ");
    scanf("%d", &(ptr + i)->class);
    printf("Enter the section : ");
    scanf("%s", &(ptr + i)->section);
  }
  printf("\nDetails of the Students: \n");
  printf("\n");
  for (int i = 0; i < n; i++)
  {
    printf("Student %d", i + 1);
    printf("\nName        : %s", (ptr + i)->name);
    printf("\nRoll Number : %d", (ptr + i)->roll_number);
    printf("\nClass       : %d", (ptr + i)->class);
    printf("\nSection     : %c", (ptr + i)->section);
    printf("\n");
  }
  return 0;
}