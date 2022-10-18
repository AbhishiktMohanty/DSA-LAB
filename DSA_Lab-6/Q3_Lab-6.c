/*Q3. Write a menu driven program to perform the following operations in a double linked list by using suitable
 user defined functions for each case.
a) Traverse the list forward,
b) Traverse the list backward,
c) Check if the list is empty
d) Insert a node at the certain position (at beginning/end/any position) 
e) Delete a node at the certain position (at beginning/end/any position)
f) Delete a node for the given key, 
g) Count the total number of nodes,
h) Search for an element in the linked list
Verify & validate each function from main method */
//(b, f not done)

#include <stdio.h>
#include <stdlib.h>

// Node Structure of the linked list
struct node
{
    int data;
    struct node *prev, *next;
};
struct node *start = NULL;

// a Function to traverse and print the linked list
void traverseFor()
{
    // List is empty
    // just return
    if (start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    // Else print the Node's Data
    struct node *temp;
    temp = start;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
        if(temp != NULL)
        printf(" --> ");
    }
}
// Traverse BackWard



// c checking empty list or not
void checkEmpty()
{
    // List is empty
    // just return
    if (start == NULL)
    {
        printf("\nList is empty\n");
        return;
    }
    else
    {
        printf("\nList is not empty\n");
        return;
    }
}

// function to insert node at the front
// d(i) of the linked list
void insertAtFront()
{
    int data;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->prev = NULL;

    // Pointer of temp will be assigned to start
    temp->next = start;
    start = temp;
}

// d(ii) function to insert at the end of the linked list
void insertAtEnd()
{
    int data;
    struct node *temp, *trav;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    temp->data = data;
    temp->next = NULL;
    trav = start;

    // If start is NULL
    if (start == NULL)
    {

        start = temp;
    }

    // Changes Links
    else
    {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}

// d(iii) Function to insert at any given position in the linked list
void insertAtPosition()
{
    int data, pos, i = 1;
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->next = NULL;
    newnode->prev = NULL;

    // Enter the position and data
    printf("\nEnter position : ");
    scanf("%d", &pos);
    printf("\nEnter number to be inserted: ");
    scanf("%d", &data);
    newnode->data = data;
    temp = start;

    // If start==NULL,
    if (start == NULL)
    {
        start = newnode;
        newnode->prev = NULL;
        newnode->next = NULL;
    }

    // If position==1,
    else if (pos == 1)
    {
        newnode->next = start;
        newnode->next->prev = newnode;
        newnode->prev = NULL;
        start = newnode;
    }

    // Change links
    else
    {
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        temp->next->prev = newnode;
    }
}

// e(i) function to delete from the front of the linked list
void deleteFirst()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        start = start->next;
        if (start != NULL)
            start->prev = NULL;
        free(temp);
    }
}

// e(ii) function to delete from the end
// of the linked list
void deleteEnd()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    if (start->next == NULL)
        start = NULL;
    else
    {
        temp->prev->next = NULL;
        free(temp);
    }
}

// e(iii) function to delete from any given
// position from the linked list
void deletePosition()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = start;

    // If DLL is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Otherwise
    else
    {
        // Position to be deleted
        printf("\nEnter position : ");
        scanf("%d", &pos);

        // If the position is the first node
        if (pos == 1)
        {
            position = start;
            start = start->next;
            if (start != NULL)
            {
                start->prev = NULL;
            }
            free(position);
            return;
        }

        // Traverse till position
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        // Change Links
        position = temp->next;
        if (position->next != NULL)
            position->next->prev = temp;
        temp->next = position->next;

        // Free memory
        free(position);
    }
}

// g. Count Nodes
void countNodes() {  
    int counter = 0;  
    //Node current will point to head  
    struct node *current = start;  
      
    while(current != NULL) {  
        //Increment the counter by 1 for each node  
        counter++;  
        current = current->next;  
    }  
    printf("Number of nodes in the list is %d\n",counter);
}  

// h. search
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = start;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("\nitem found at location %d ",i+1);  
                flag=0;  
                break;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("\nItem not found\n");  
        }  
    }     
          
}  

int main()
{
    int choice;
    printf("\t1  Traverse the list forward\n");
    printf("\t2  Traverse the list backward\n");
    printf("\t3  Check if the list is empty\n");
    printf("\t4  For insertion at beginning\n");
    printf("\t5  For insertion at end\n");
    printf("\t6  For insertion at any position\n");
    printf("\t7  For deletion at beginning\n");
    printf("\t8  For deletion at end\n");
    printf("\t9  For deletion at any position\n");
    printf("\t10 Delete a node for the given key\n");
    printf("\t11 Count the total number of nodes\n");
    printf("\t12 Search for an element in the linked list\n");
    printf("\t13 To exit\n");
    while (1)
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverseFor();
            break;
        case 2:
            //traverseBack();
            break;
        case 3:
            checkEmpty();
            break;
        case 4:
            insertAtFront();
            break;
        case 5:
            insertAtEnd();
            break;
        case 6:
            insertAtPosition();
            break;
        case 7:
            deleteFirst();
            break;
        case 8:
            deleteEnd();
            break;
        case 9:
            deletePosition();
            break;
        case 10:
            // delKey();
            break;
        case 11:
            countNodes();
            break;
        case 12:
            search();
            break;
        case 13:
            exit(1);
            break;
        default:
            printf("Incorrect Choice. Try Again \n");
            continue;
        }
    }
    return 0;
}