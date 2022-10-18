// /*1. Write a menu driven program to implement queue operations such as Enqueue, Dequeue, Peek,
// Display of elements, IsEmpty, IsFull using static array.*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 10

int queue_arr[MAX];
int rear=-1;
int front=-1;

void insert(int item);
int del();
int peek();
void display();
int isFull();
int isEmpty();

int main()
{
        int choice,item;
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display element at the front\n");
        printf("4.Display all elements of the queue\n");
        printf("5.Quit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        
        do
        {
            switch(choice)
                {
                case 1:
                        printf("\nInput the element for adding in queue : ");
                        scanf("%d",&item);
                        insert(item);
                        break;
                case 2:
                        item=del();
                        printf("\nDeleted element is  %d\n",item);
                        break;
                case 3:
                        printf("\nElement at the front is %d\n",peek());
                        break;
                case 4:
                        display();
                        break;
                case 5:
                        exit(1);
                default:
                        printf("\nWrong choice\n");
                }
        } while (1);

        return 0;

}

// Enqueue
void insert(int item)
{
        if( isFull() )
        {
                printf("\nQueue Overflow\n");
                return;
        }
        if( front == -1 )
                front=0;
        rear=rear+1;
        queue_arr[rear]=item ;
}

// Dequeue
int del()
{
        int item;
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        item=queue_arr[front];
        front=front+1;
        return item;
}

// Peek
int peek()
{
        if( isEmpty() )
        {
                printf("\nQueue Underflow\n");
                exit(1);
        }
        return queue_arr[front];
}

// isEmpty
int isEmpty()
{
        if( front==-1 || front==rear+1 )
                return 1;
        else
                return 0;
}

// isFull
int isFull()
{
        if( rear==MAX-1 )
                return 1;
        else
                return 0;
}

// display
void display()
{
        int i;
        if ( isEmpty() )
        {
                printf("\nQueue is empty\n");
                return;
        }
        printf("\nQueue is :\n\n");
        for(i=front;i<=rear;i++)
                printf("%d  ",queue_arr[i]);
        printf("\n\n");
}