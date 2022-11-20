/*Q2. Write a menu driven program to perform the following operations of a stack using linked list by using suitable user defined functions for each case.
a) Check if the stack is empty
b) Display the contents of stack
c) Push
d) Pop*/

#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and next pointer
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

// checking the stack is empty or not
void checkEmpty()
{
    if (top == NULL)
    {
        printf("\tStack is Empty\n");
    }
    else
    {
        printf("\tStack is not Empty\n");
    }
}
// Push() operation on a  stack
void push()
{
    int value;
    printf("\tEnter a value to be pushed: ");
    scanf("%d", &value);
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value; // assign value to the node
    if (top == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = top; // Make the node as top
    }
    top = newNode; // top always points to the newly created node
    printf("\tNode is Inserted\n");
}

void pop()
{
    if (top == NULL)
    {
        printf("\tStack Underflow\n");
    }
    else
    {
        struct Node *temp = top;
        int temp_data = top->data;
        top = top->next;
        free(temp);
        printf("\tPopped element is: %d\n", temp_data);
    }
}

void display()
{
    // Display the elements of the stack
    if (top == NULL)
    {
        printf("\n\tStack Underflow\n");
    }
    else
    {
        printf("\tThe stack is: \n");
        struct Node *temp = top;
        printf("\t");
        while (temp->next != NULL)
        {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL\n\n", temp->data);
    }
}

int main()
{
    int choice, value;
    printf("\n\t STACK OPERATIONS USING LINKED LIST");
    printf("\n\t------------------------------------");
    printf("\n\t 1.Check if the stack is empty\n\t 2.Display the contents of stack\n"
           "\t 3.PUSH\n\t 4.POP\n\t 5.EXIT\n");
    while (1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            checkEmpty();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        case 3:
        {
            push();
            break;
        }
        case 4:
        {
            pop();
            break;
        }
        case 5:
        {
            printf("\tEXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\tPlease enter a valid choice(1/2/3/4/5)");
        }
        }
    }
}