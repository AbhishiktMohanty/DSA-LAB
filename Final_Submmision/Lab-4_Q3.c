// Q3. WAP to print mth node from the last of a linked list of n nodes.

#include <stdio.h>
#include <stdlib.h>
// structure of a node
struct node_4_3
{
   int data_2991;
   struct node_4_3 *next_2991;
} * head_2991, *temp_2991;

// function for inserting nodes into a list
void insert_4_3(int val_2991)
{
   int count_2991 = 0;
   struct node_4_3 *newnode = (struct node_4_3 *)malloc(sizeof(struct node_4_3));
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
void display_4_3()
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
void last_4_3(int n_2991)
{
   int count_2991 = 0;
   temp_2991 = head_2991;
   for (int i = 0; i < count_2991 - n_2991; i++)
   {
      temp_2991 = temp_2991->next_2991;
   }
   printf("\n%dth node from the end of linked list is : %d", n_2991, temp_2991->data_2991);
}
int main_4_3()
{
   // creating list
   struct node_4_3 *head_2991 = NULL;
   int n_2991;
   printf("Enter the mth node from the last: ");
   scanf("%d", &n_2991);
   // inserting elements into a list
   insert_4_3(11);
   insert_4_3(21);
   insert_4_3(31);
   insert_4_3(41);
   insert_4_3(51);
   insert_4_3(61);
   // displaying the list
   printf("\nLinked list is : ");
   display_4_3();
   // calling function for finding nth element in a list from last
   last_4_3(n_2991);
   return 0;
}