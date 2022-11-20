/*Q1. Write a menu driven program to perform the following operations of a stack using array by using suitable user defined functions for each case.
a) Check if the stack is empty
b) Display the contents of stack
c) Push
d) Pop */

#include <stdio.h>
int stack[100], choice, n, top, x, i;

void checkEmpty()
{
    if (top <= -1)
    {
        printf("\tStack is Empty\n");
    }
    else
    {
        printf("\tStack is not Empty\n");
    }
}
void push()
{
    if (top >= n - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf("\tEnter a value to be pushed: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\tStack is under flow");
    }
    else
    {
        printf("\tThe popped elements is %d", stack[top]);
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        printf("\n\tThe elements in STACK: \n");
        printf("\t[ ");
        for (i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
            if (i > 0)
                printf("\t");
        }
        printf(" ]");
    }
    else
    {
        printf("\n\tThe STACK is empty");
    }
}
int main()
{
    top = -1;
    printf("Enter the size of STACK[MAX=100]: ");
    scanf("%d", &n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t------------------------------");
    printf("\n\t 1.Check if the stack is empty\n\t 2.Display the contents of stack\n"
           "\t 3.PUSH\n\t 4.POP\n\t 5.EXIT\n");
    do
    {
        printf("\nEnter the Choice: ");
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
            printf("\n\tEXIT POINT ");
            break;
        }
        default:
        {
            printf("\n\tPlease Enter a Valid Choice(1/2/3/4/5)");
        }
        }
    } while (choice != 5);
    return 0;
}