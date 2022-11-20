/*2. Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek,
Display of elements, IsEmpty using linked list.*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
} * front, *rear, *temp, *front1;

void enq(int data);
void deq();
int peek();
void display();
void empty();
void create();

int count = 0;

void main()
{
    int no, ch, e;
    printf("1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Empty\n6. Exit");
    create();
    while (1)
    {
        printf("\nEnter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\tEnter data: ");
            scanf("%d", &no);
            enq(no);
            break;
        case 2:
            deq();
            break;
        case 3:
            e = peek();
            if (e != 0)
                printf("\tFront element : %d\n", e);
            else
                printf("\tNo front element in Queue as queue is empty\n");
            break;
        case 4:
            display();
            break;
        case 5:
            empty();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Wrong choice");
            break;
        }
    }
}

// Create an empty queue
void create()
{
    front = rear = NULL;
}

// Enqueing the queue
void enq(int data)
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(1 * sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
    }
    else
    {
        temp = (struct node *)malloc(1 * sizeof(struct node));
        rear->ptr = temp;
        temp->info = data;
        temp->ptr = NULL;

        rear = temp;
    }
    count++;
}

// Deque
void deq()
{
    front1 = front;

    if (front1 == NULL)
    {
        printf("\tError: Trying to display elements from empty queue");
        return;
    }
    else if (front1->ptr != NULL)
    {
        front1 = front1->ptr;
        printf("\n\tDequed value : %d\n", front->info);
        free(front);
        front = front1;
    }
    else
    {
        printf("\n\tDequed value : %d\n", front->info);
        free(front);
        front = NULL;
        rear = NULL;
    }
    count--;
}

// front element of queue
int peek()
{
    if ((front != NULL) && (rear != NULL))
        return (front->info);
    else
        return 0;
}

// Displaying the queue elements
void display()
{
    front1 = front;

    if ((front1 == NULL) && (rear == NULL))
    {
        printf("\tQueue is empty");
        return;
    }
    printf("\t");
    while (front1 != rear)
    {
        printf("%d --> ", front1->info);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->info);
}

// Display if queue is empty or not
void empty()
{
    if ((front == NULL) && (rear == NULL))
        printf("\n\tQueue empty");
    else
        printf("\tQueue not empty");
}