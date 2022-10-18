/*Q1. WAP to create a double linked list of n nodes and display the linked list by using suitable user defined
functions for create and display operations.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *pre;
    struct node *next;
} * stnode, *ennode;

void create(int n)
{
    int i, num;
    struct node *fnNode;

    if (n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        if (stnode != NULL)
        {
            printf(" Input node 1 : "); // assigning data in the first node
            scanf("%d", &num);

            stnode->num = num;
            stnode->pre = NULL;
            stnode->next = NULL;
            ennode = stnode;
            // putting data for rest of the nodes
            for (i = 2; i <= n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if (fnNode != NULL)
                {
                    printf(" Input node %d : ", i);
                    scanf("%d", &num);
                    fnNode->num = num;
                    fnNode->pre = ennode; // new node is linking with the previous node
                    fnNode->next = NULL;

                    ennode->next = fnNode; // previous node is linking with the new node
                    ennode = fnNode;       // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void display()
{
    struct node *temp;
    int n = 1;
    if (stnode == NULL)
    {
        printf("No data found in the List yet.");
    }
    else
    {
        temp = stnode;
        printf("\n\nData entered on the list are :\n");

        while (temp != NULL)
        {
            printf(" Node %d : %d\n", n, temp->num);
            n++;
            temp = temp->next; // current pointer moves to the next node
        }
    }
}

int main()
{
    int n;
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    create(n);
    display();
    return 0;
}
