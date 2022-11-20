/*3. Write a menu driven program to implement circular queue operations such as Enqueue, Dequeue, Peek,
Display of elements, IsEmpty, IsFull using static array.*/

// Circular Queue implementation in C
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

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
            printf("\n\tWrong choice\n");
        }
    }

    return 0;
}

// Check if the queue is full
int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}

// Check if the queue is empty
int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}

// Adding an element
void enqueue(int element)
{
    if (isFull())
        printf("\n Queue is Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = element;
    }
}

// Removing an element
int dequeue()
{
    int element;
    if (isEmpty())
    {
        printf("\n Queue is Underflow\n");
        return (-1);
    }
    else
    {
        element = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        // Q has only one element, so we reset the
        // queue after dequeing it. ?
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", element);
        return (element);
    }
}

// peek
int peek()
{
    if (isEmpty())
    {
        printf("\nQueue is Underflow\n");
        exit(1);
    }
    return queue[front];
}

// Display the queue
void display()
{
    int i;
    if (isEmpty())
        printf("\tUnderflow Queue\n");
    else
    {
        printf("\tQueue is : ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
    }
}