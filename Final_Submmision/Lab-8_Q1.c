/*1. Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek,
Display of elements, IsEmpty, IsFull using static array.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX];
int rear = -1;
int front = -1;

void enqueue(int item);
int dequeue();
int peek();
void display();
int isFull();
int isEmpty();

int main()
{
        int choice, item;
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Quit\n");
        while (1)
        {
                printf("\nEnter your choice : ");
                scanf("%d", &choice);
                switch (choice)
                {
                case 1:
                        printf("\tInput element to queue: ");
                        scanf("%d", &item);
                        enqueue(item);
                        break;
                case 2:
                        item = dequeue();
                        printf("\tDeleted element is %d\n", item);
                        break;
                case 3:
                        printf("\tElement at the front is %d\n", peek());
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        }

        return 0;
}

// Enqueue
void enqueue(int item)
{
        if (isFull())
        {
                printf("\n\tQueue Overflow");
                return;
        }
        if (front == -1)
                front = 0;
        rear = rear + 1;
        queue[rear] = item;
}

// Dequeue
int dequeue()
{
        int item;
        if (isEmpty())
        {
                printf("\n\tQueue Underflow\n");
                exit(1);
        }
        item = queue[front];
        front = front + 1;
        return item;
}

// Peek
int peek()
{
        if (isEmpty())
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue[front];
}

// isEmpty
int isEmpty()
{
        if (front == -1 || front == rear + 1)
                return 1;
        else
                return 0;
}

// isFull
int isFull()
{
        if (rear == MAX - 1)
                return 1;
        else
                return 0;
}

// display
void display()
{
        int i;
        if (isEmpty())
        {
                printf("\tQueue is empty\n");
                return;
        }
        printf("\tQueue is :  ");
        for (i = front; i <= rear; i++)
                printf("%d  ", queue[i]);
        printf("\n");
}