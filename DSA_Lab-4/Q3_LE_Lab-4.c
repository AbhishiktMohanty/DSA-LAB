// Q3. WAP to print mth node from the last of a linked list of n nodes.

#include <stdio.h>
#include <stdlib.h>
// structure of a node
struct node
{
   int data_2991;
   struct node *next_2991;
} * head_2991, *temp_2991;
int count_2991 = 0;
// function for inserting nodes into a list
void insert(int val_2991)
{
   struct node *newnode = (struct node *)malloc(sizeof(struct node));
   newnode->data_2991 = val_2991;
   newnode->next_2991 = NULL;
   if (head_2991 == NULL)
   {
      head_2991 = newnode;
      temp_2991 = head_2991;
      count_2991++;
   }
   else
   {
      temp_2991->next_2991 = newnode;
      temp_2991 = temp_2991->next_2991;
      count_2991++;
   }
}
// function for displaying a list
void display()
{
   if (head_2991 == NULL)
      printf("No node ");
   else
   {
      temp_2991 = head_2991;
      while (temp_2991 != NULL)
      {
         printf("%d ", temp_2991->data_2991);
         temp_2991 = temp_2991->next_2991;
      }
   }
}
// function for finding 3rd node from the last of a linked list
void last(int n_2991)
{
   temp_2991 = head_2991;
   for (int i = 0; i < count_2991 - n_2991; i++)
   {
      temp_2991 = temp_2991->next_2991;
   }
   printf("\n%dth node from the end of linked list is : %d", n_2991, temp_2991->data_2991);
}
int main()
{
   // creating list
   struct node *head_2991 = NULL;
   int n_2991;
   printf("Enter the mth node from the last: ");
   scanf("%d", &n_2991);
   // inserting elements into a list
   insert(11);
   insert(21);
   insert(31);
   insert(41);
   insert(51);
   insert(61);
   // displaying the list
   printf("\nLinked list is : ");
   display();
   // calling function for finding nth element in a list from last
   last(n_2991);
   return 0;
}