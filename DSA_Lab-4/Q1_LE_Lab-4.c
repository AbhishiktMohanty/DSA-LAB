/*Q1. Write a menu driven program to perform the following operations in a single linked list by
using suitable user defined functions for each case.
a) Traversal of the list
b) Check if the list is empty
c) Insert a node at the certain position (at beginning/end/any position)
d) Delete a node at the certain position (at beginning/end/any position)
e) Delete a node for the given key
f) Count the total number of nodes
g) Search for an element in the linked list Verify & validate each function from main method.
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info_2991;
    struct node *link_2991;
    struct node *head_2991;
};

void traversal(struct node *temp_2991)
{
    if (temp_2991 == NULL)
    {
        printf("\nThe linked list is empty\n");
    }
    else
    {
        while (temp_2991 != NULL)
        {
            printf("Elements: %d\n", temp_2991->info_2991);
            temp_2991 = temp_2991->link_2991;
        }
    }
}

struct node *insertbeg(struct node *head_2991, struct node *newnode)
{
    if (head_2991 == NULL)
    {
        newnode->link_2991 = NULL;
        head_2991 = newnode;
    }
    else
    {
        newnode->link_2991 = head_2991;
        head_2991 = newnode;
    }
    return head_2991;
}

struct node *insertend(struct node *head_2991, struct node *newnode)
{
    newnode->link_2991 = NULL;
    struct node *temp_2991 = head_2991;
    if (head_2991 == NULL)
    {
        head_2991 = newnode;
    }
    else
    {
        for (temp_2991 = head_2991; temp_2991->link_2991 != NULL; temp_2991 = temp_2991->link_2991)
            ;
        temp_2991->link_2991 = newnode;
    }
    return head_2991;
}

struct node *insertatpos(struct node *head_2991, struct node *newnode, int pos)
{
    if (pos == 1)
    {
        newnode->link_2991 = head_2991;
        head_2991 = newnode;
    }
    else
    {
        struct node *temp_2991 = head_2991;
        for (int i = 1; i < pos - 1; i++)
        {
            temp_2991 = temp_2991->link_2991;
        }
        newnode->link_2991 = temp_2991->link_2991;
        temp_2991->link_2991 = newnode;
    }
    return head_2991;
}

struct node *deletefirst(struct node *head_2991)
{
    if (head_2991 == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        struct node *temp_2991 = head_2991;
        head_2991 = head_2991->link_2991;
        free(temp_2991);
    }
    return head_2991;
}

struct node *deleteend(struct node *head_2991)
{
    if (head_2991 == NULL)
    {
        printf("The linked list is empty\n");
    }
    else if (head_2991->link_2991 == NULL)
    {
        free(head_2991);
        head_2991 = NULL;
    }
    else
    {
        struct node *temp_2991 = head_2991;

        for (temp_2991 = head_2991; temp_2991->link_2991->link_2991 != NULL; temp_2991 = temp_2991->link_2991)
            ;

        temp_2991->link_2991 = NULL;
        free(temp_2991->link_2991);
    }
    return head_2991;
}

struct node *deleteatpos(struct node *head_2991, int pos)
{
    if (pos == 1)
    {
        struct node *temp_2991 = head_2991;
        head_2991 = head_2991->link_2991;
        free(temp_2991);
    }
    else
    {
        struct node *temp_2991 = head_2991;
        for (int i = 1; i < pos - 1; i++)
        {
            temp_2991 = temp_2991->link_2991;
        }
        struct node *temp2_2991 = temp_2991->link_2991;
        temp_2991->link_2991 = temp2_2991->link_2991;
        free(temp2_2991);
    }
    return head_2991;
}

struct node *deletenode(struct node *head_2991, int key)
{
    if (head_2991 == NULL)
    {
        printf("The linked list is empty\n");
    }
    else if (head_2991->info_2991 == key)
    {
        struct node *temp_2991 = head_2991;
        head_2991 = head_2991->link_2991;
        free(temp_2991);
    }
    else
    {
        struct node *temp_2991 = head_2991;

        for (temp_2991 = head_2991; temp_2991->link_2991->info_2991 != key; temp_2991 = temp_2991->link_2991)
            ;

        if (temp_2991->link_2991 == NULL)
        {
            printf("The key is not found\n");
        }
        else
        {
            struct node *temp2_2991 = temp_2991->link_2991;
            temp_2991->link_2991 = temp2_2991->link_2991;
            free(temp2_2991);
        }
    }
    return head_2991;
}

void countnodes(struct node *head_2991)
{
    int count_2991 = 0;
    struct node *temp_2991 = head_2991;
    while (temp_2991 != NULL)
    {
        count_2991++;
        temp_2991 = temp_2991->link_2991;
    }
    printf("\nNumber of nodes in the linked list: %d\n", count_2991);
}

void search(struct node *temp_2991, int key)
{
    int flag_2991 = 0;
    if (temp_2991 == NULL)
    {
        printf("\nThe linked list is empty\n");
    }
    else
    {
        while (temp_2991 != NULL)
        {
            if (temp_2991->info_2991 == key)
            {
                flag_2991 = 1;
                break;
            }
            temp_2991 = temp_2991->link_2991;
        }
        if (flag_2991 == 1)
        {
            printf("\nElement found\n");
        }
        else
        {
            printf("\nElement not found\n");
        }
    }
}

int main(void)
{

    struct node *head_2991 = NULL;
    
     // CREATING n NUMBER OF NODES

    struct node *M_2991 = NULL;
    struct node *N_2991 = NULL;
    int num_nodes, i;
    printf("Enter the no. of nodes you want to create: ");
    scanf("%d", &num_nodes);
    for (i = 0; i < num_nodes; i++)
    {
        if (head_2991 == NULL)
        {
            N_2991 = (struct node *)malloc(sizeof(struct node));
            // printf("\nList is empty");
            printf("\nEnter the value to be kept at 1st node: ");
            scanf("%d", &N_2991->info_2991);
            N_2991->link_2991 = NULL;
            head_2991 = N_2991;
        }
        else
        {
            M_2991 = (struct node *)malloc(sizeof(struct node));
            printf("Enter the value to be kept in %dth node: ", i + 1);
            scanf("%d", &M_2991->info_2991);
            M_2991->link_2991 = NULL;
            N_2991->link_2991 = M_2991;
            N_2991 = M_2991;
        }
    }

    int choice_2991;
    do
    {

        printf("\nEnter-\n");
        printf("1.Linked list before Insersion\n2.Insert a node at beginning\n3.Insert a node at end\n4.Insert a node at any position\n5.Delete a node at beginning\n6.Delete a node at end\n7.Delete a node at any position\n8.Delete a node for a given key\n9.Count the total no. of nodes\n10. search for an element in the linked list\n11.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice_2991);
        switch (choice_2991)
        {
        case 1:
        {
            traversal(head_2991);
            break;
        }

        case 2:
        {
            struct node *newnode;
            printf("\nEnter the new node info: ");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info_2991);
            head_2991 = insertbeg(head_2991, newnode);
            traversal(head_2991);
            break;
        }

        case 3:
        {
            struct node *newnode;
            printf("\nEnter the new node info: ");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info_2991);
            head_2991 = insertend(head_2991, newnode);
            traversal(head_2991);
            break;
        }

        case 4:
        {
            struct node *newnode;
            int pos;
            printf("\nEnter position at which node is to be added: ");
            scanf("%d", &pos);
            printf("\nEnter the new node info: ");
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->info_2991);
            head_2991 = insertatpos(head_2991, newnode, pos);
            traversal(head_2991);
            break;
        }

        case 5:
        {
            head_2991 = deletefirst(head_2991);
            traversal(head_2991);
            break;
        }
        case 6:
        {
            head_2991 = deleteend(head_2991);
            traversal(head_2991);
            break;
        }

        case 7:
        {
            int pos;
            printf("\nEnter position at which node is to be deleted: ");
            scanf("%d", &pos);
            head_2991 = deleteatpos(head_2991, pos);
            traversal(head_2991);
            break;
        }

        case 8:
        {
            int key;
            printf("\nEnter the key of the node to be deleted: ");
            scanf("%d", &key);
            head_2991 = deletenode(head_2991, key);
            traversal(head_2991);

            break;
        }
        case 9:
        {
            countnodes(head_2991);
            break;
        }

        case 10:
        {
            int key;
            printf("\nEnter the element you want to search: ");
            scanf("%d", &key);
            search(head_2991, key);
            break;
        }
        case 11:
        {
            printf("\nExited the program\n");
            break;
        }

        default:
            printf("\nInvalid choice\n");
        }
    } while (choice_2991 >= 1 && choice_2991 <= 10);
}