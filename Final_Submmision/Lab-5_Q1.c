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

struct node_5_1
{
    int data_91;
    struct node_5_1 *link_91;
};
struct node_5_1 *head_91 = NULL;
struct node_5_1 *last_91;

void create_5_1(int n_91)
{
    struct node_5_1 *N_91, *M_91;
    int i = 0;
    while (i < n_91)
    {
        if (head_91 == NULL)
        {
            N_91 = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
            printf("Enter the data of 1st node: ");
            scanf("%d", &N_91->data_91);
            N_91->link_91 = NULL;
            head_91 = N_91;
        }
        else
        {
            printf("Enter the data of %dth node: ", i + 1);
            M_91 = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
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
void display_5_1()
{
    struct node_5_1 *temp;
    printf("\nThe Linked List is ");
    for (temp = head_91; temp->link_91->data_91 != head_91->data_91; temp = temp->link_91)
        printf("%d ", temp->data_91);
    printf("%d", temp->data_91);
    printf("\n");
}

// Menu 2 Check if List is Empty
void empty_5_1()
{
    if (head_91 == NULL)
        printf("List is Empty.");
    else
        printf("List is not Empty.");
}

// Menu 3 Insertion
void insert_5_1()
{
    int choice;
    struct node_5_1 *newn = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
    struct node_5_1 *temp = (struct node_5_1 *)malloc(sizeof(struct node_5_1));

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
    display_5_1();
}

// Menu 4 Delete node
void delete_5_1()
{
    struct node_5_1 *temp = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
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
            struct node_5_1 *ptr;
            ptr = temp->link_91;
            temp->link_91 = temp->link_91->link_91;
            free(ptr);
        }
        break;
    }
    display_5_1();
}

// Menu 5 Delete node for a given key
void del_key_5_1()
{
    printf("Enter the Key: ");
    int key;
    scanf("%d", &key);
    struct node_5_1 *temp;
    temp = head_91;
    if (temp->data_91 == key)
    {
        struct node_5_1 *ptr;
        ptr = temp->link_91;
        head_91 = ptr;
        free(temp);
        display_5_1();
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
            struct node_5_1 *p1;
            p1 = temp->link_91;
            temp->link_91 = temp->link_91->link_91;
            free(p1);
            printf("Key Found.\n");
            display_5_1();
        }
        else
            printf("Key not found.");
    }
}

// Menu 6 Count no of nodes
void count_5_1()
{
    struct node_5_1 *temp = (struct node_5_1 *)malloc(sizeof(struct node_5_1));
    int c = 0;
    for (temp = head_91; temp->link_91 != head_91; temp = temp->link_91)
        c++;
    c++;
    printf("No of nodes is %d", c);
}

// Menu 7 Search for an element
void search_5_1()
{
    printf("Enter no to search: ");
    int key;
    scanf("%d", &key);
    struct node_5_1 *temp = head_91;
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

int main_5_1()
{
    int n_91;
    printf("Enter no of nodes you want to create: ");
    scanf("%d", &n_91);

    create_5_1(n_91);

    printf("\n\nMenu\n0: Exit\n1: Traversal\n2: Check if list is empty.\n3: Insertion.\n4: Deletion.\n");
    printf("5: Deletion for a key.\n6: Count no of nodes.\n7: Search for an element.\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 0:
        break;
    case 1:
        display_5_1();
        break;

    case 2:
        empty_5_1();
        break;

    case 3:
        insert_5_1();
        break;

    case 4:
        delete_5_1();
        break;

    case 5:
        del_key_5_1();
        break;

    case 6:
        count_5_1();
        break;

    case 7:
        search_5_1();
        break;

    default:
        printf("Enter a valid value.");
        break;
    }
    return 0;
}