/*4. Write a menu driven program to implement Deques (both Input-restricted and Output-restricted)
operations such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static array.*/

#include <conio.h>
#include <stdio.h>
#define MAX_SIZE 5

int deque[MAX_SIZE];
int Left = -1;
int Right = -1;

void InsertRight()
{
    int added_item;
    if ((Left == 0 && Right == MAX_SIZE - 1) || (Left == Right + 1))
    {
        printf("\tQueue Overflow\n");
        return;
    }
    if (Left == -1)
    {
        Left = 0;
        Right = 0;
    }
    else if (Right == MAX_SIZE - 1)
        Right = 0;
    else
        Right = Right + 1;
    printf("\tInput element to queue: ");
    scanf("%d", &added_item);
    deque[Right] = added_item;
}

void InsertLeft()
{
    int added_item;
    if ((Left == 0 && Right == MAX_SIZE - 1) || (Left == Right + 1))
    {
        printf("\tQueue Overflow \n");
        return;
    }
    if (Left == -1)
    {
        Left = 0;
        Right = 0;
    }
    else if (Left == 0)
        Left = MAX_SIZE - 1;
    else
        Left = Left - 1;
    printf("\tInput element to queue: ");
    scanf("%d", &added_item);
    deque[Left] = added_item;
}

void DeleteLeft()
{
    if (Left == -1)
    {
        printf("\tQueue Under-flow\n");
        return;
    }
    printf("\tDeleted element is %d\n", deque[Left]);
    if (Left == Right)
    {
        Left = -1;
        Right = -1;
    }
    else if (Left == MAX_SIZE - 1)
        Left = 0;
    else
        Left = Left + 1;
}

void DeleteRight()
{
    if (Left == -1)
    {
        printf("\tQueue Under flow\n");
        return;
    }
    printf("\tDeleted element is : %d\n", deque[Right]);
    if (Left == Right)
    {
        Left = -1;
        Right = -1;
    }
    else if (Right == 0)
        Right = MAX_SIZE - 1;
    else
        Right = Right - 1;
}

void Display()
{
    int fpos = Left, rpos = Right;
    if (Left == -1)
    {
        printf("\tQueue is empty\n");
        return;
    }
    printf("\tQueue is : ");
    if (fpos <= rpos)
    {
        while (fpos <= rpos)
        {
            printf("%d ", deque[fpos]);
            fpos++;
        }
    }
    else
    {
        while (fpos <= MAX_SIZE - 1)
        {
            printf("%d ", deque[fpos]);
            fpos++;
        }
        fpos = 0;
        while (fpos <= rpos)
        {
            printf("%d ", deque[fpos]);
            fpos++;
        }
    }
    printf("\n");
}

void Input()
{
    int Option;
    printf("\nFor Input restricted\n  1.Insert at Right\n  2.Delete from Left\n");
    printf("  3.Delete from Right\n  4.Display\n  5.Quit\n");
    do // while(Option<0 || Option>5)
    {
        printf("  Enter your choice : ");
        scanf("%d", &Option);

        switch (Option)
        {
        case 1:
            InsertRight();
            break;
        case 2:
            DeleteLeft();
            break;
        case 3:
            DeleteRight();
            break;
        case 4:
            Display();
            break;
        case 5:
            break;
        default:
            printf("Wrong Option\n");
        }
    } while (Option != 5);
}

void Output()
{
    int Option;
    printf("\nFor Output restricted\n  1.Insert at Right\n  2.Insert at Left\n");
    printf("  3.Delete from Left\n  4.Display\n  5.Quit\n");
    do // while(Option<=0 || Option>5)
    {
        printf("  Enter your choice : ");
        scanf("%d", &Option);
        switch (Option)
        {
        case 1:
            InsertRight();
            break;
        case 2:
            InsertLeft();
            break;
        case 3:
            DeleteLeft();
            break;
        case 4:
            Display();
            break;
        case 5:
            break;
        default:
            printf("Wrong Option\n");
        }
    } while (Option != 5);
}

int main()
{
    int Option;
    printf("1.Input restricted dequeue\n");
    printf("2.Output restricted dequeue\n");
    do
    {
        printf("\n*Enter your choice : ");
        scanf("%d", &Option);
        switch (Option)
        {
        case 1:
            Input();
            break;
        case 2:
            Output();
            break;
        default:
            printf("Wrong Option\n");
        }
    } while (Option != 2);
    return 0;
}