/*Q1. Write a menu driven program to perform the following operations in a single circular linked list by
using suitable user defined functions for each case.
a) Traversal of the list
b) Check if the list is empty
c) Insert a node at the certain position (at beginning/end/any position)
d) Delete a node at the certain position (at beginning/end/any position)
e) Delete a node for the given key
f) Count the total number of nodes
g) Search for an element in the linked list Verify & validate each function from main method.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data_91;
    struct node *link_91;
};
struct node *head_91 = NULL;
struct node *last_91;

void create(int n_91)
{
    struct node *N_91, *M_91;
    int i = 0;
    while (i < n_91)
    {
        if (head_91 == NULL)
        {
            N_91 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data of 1st node: ");
            scanf("%d", &N_91->data_91);
            N_91->link_91 = NULL;
            head_91 = N_91;
        }
        else
        {
            printf("Enter the data of %dth node: ", i + 1);
            M_91 = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &M_91->data_91);
            N_91->link_91 = M_91;
            M_91->link_91 = head_91;
            N_91 = M_91;
        }
        last_91 = M_91;
        i++;
    }
}

// Traversal (Menu 1)
void display()
{
    struct node *temp;
    printf("\nThe Linked List is ");
    for (temp = head_91; temp->link_91->data_91 != head_91->data_91; temp = temp->link_91)
        printf("%d ", temp->data_91);
    printf("%d", temp->data_91);
    printf("\n");
}

// Menu 2 Check if List is Empty
void empty()
{
    if (head_91 == NULL)
        printf("List is Empty.");
    else
        printf("List is not Empty.");
}

// Menu 3 Insertion
void insert()
{
    int choice;
    struct node *newn = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    printf("\nMenu\n1: Insertion at Beginning.\n2: Insertion at end.\n3: Insertion at any position.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    // Input
    printf("Enter value: ");
    scanf("%d", &newn->data_91);
    switch (choice)
    {
    case 1: // Beginning
        if (head_91 == NULL)
        {
            head_91 = newn;
            newn->link_91 = NULL;
        }
        else
        {
            newn->link_91 = head_91;
            head_91 = newn;
            last_91->link_91 = head_91;
        }
        break;

    case 2: // End
        if (head_91 == NULL)
        {
            head_91 = newn;
            newn->link_91 = NULL;
        }
        else
        {
            for (temp = head_91; temp->link_91 != head_91; temp = temp->link_91)
                 ;
            temp->link_91 = newn;
            newn->link_91 = head_91;
            last_91 = newn;
        }
        break;

    case 3: // Any Position
        printf("Enter Position: ");
        int pos;
        scanf("%d", &pos);
        if (head_91 == NULL)
        {
            head_91 = newn;
            newn->link_91 = NULL;
        }
        else
        {
            int i;
            for (i = 1, temp = head_91; i < pos - 1; temp = temp->link_91, i++)
                ;
            newn->link_91 = temp->link_91;
            temp->link_91 = newn;
        }
        break;
    }
    display();
}

// Menu 4 Delete node
void delete()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    printf("\nMenu\n1: Delete at Beginning.\n2: Delete at End.\n3: Delete at any position.\n");
    printf("Enter your choice: ");
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Beginning
        if (head_91 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else
        {
            temp = head_91;
            head_91 = head_91->link_91;
            free(temp);
        }
        break;

    case 2: // End
        if (head_91 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else if (head_91->link_91 == NULL)
        {
            free(head_91);
            head_91 = NULL;
        }
        else
        {
            for (temp = head_91; temp->link_91->link_91 != head_91; temp = temp->link_91)
                ;
            free(temp->link_91);
            temp->link_91 = head_91;
        }
        break;

    case 3: // Any Position
        printf("Enter Position: ");
        int pos;
        scanf("%d", &pos);
        if (head_91 == NULL)
        {
            printf("List is Empty, Deletion not possible");
        }
        else if (head_91->link_91 == NULL)
        {
            free(head_91);
            head_91 = NULL;
        }
        else
        {
            int i;
            for (i = 1, temp = head_91; i < pos - 1; temp = temp->link_91, i++)
                ;
            struct node *ptr;
            ptr = temp->link_91;
            temp->link_91 = temp->link_91->link_91;
            free(ptr);
        }
        break;
    }
    display();
}

// Menu 5 Delete node for a given key
void del_key()
{
    printf("Enter the Key: ");
    int key;
    scanf("%d", &key);
    struct node *temp;
    temp = head_91;
    if (temp->data_91 == key)
    {
        struct node *ptr;
        ptr = temp->link_91;
        head_91 = ptr;
        free(temp);
        display();
    }
    else
    {
        int flag = 1;
        do
        {
            if (temp->link_91->data_91 == key)
            {
                flag = 0;
                break;
            }
            temp = temp->link_91;
        } while (temp != head_91);
        if (flag == 0)
        {
            struct node *p1;
            p1 = temp->link_91;
            temp->link_91 = temp->link_91->link_91;
            free(p1);
            printf("Key Found.\n");
            display();
        }
        else
            printf("Key not found.");
    }
}

// Menu 6 Count no of nodes
void count()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    int c = 0;
    for (temp = head_91; temp->link_91 != head_91; temp = temp->link_91)
        c++;
    c++;
    printf("No of nodes is %d", c);
}

// Menu 7 Search for an element
void search()
{
    printf("Enter no to search: ");
    int key;
    scanf("%d", &key);
    struct node *temp = head_91;
    do
    {
        if (temp->data_91 == key)
        {
            printf("Element found.");
            return;
        }
        temp = temp->link_91;
    } while (temp != head_91);
    printf("Element not found.");
}

int main()
{
    int n_91;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n_91);

    create(n_91);

    printf("\n\nMenu\n1: Traversal\n2: Check if list is empty.\n3: Insertion.\n4: Deletion.\n");
    printf("5: Deletion for a key.\n6: Count no of nodes.\n7: Search for an element.\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        display();
        break;

    case 2:
        empty();
        break;

    case 3:
        insert();
        break;

    case 4:
        delete();
        break;

    case 5:
        del_key();
        break;

    case 6:
        count();
        break;

    case 7:
        search();
        break;

    default:
        printf("Enter a valid value.");
        break;
    }
    return 0;
}