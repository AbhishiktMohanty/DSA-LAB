//Q2. WAP to display the contents of a linked list if reverse order.

#include<stdio.h>
#include<malloc.h>

// A linked list node

struct node
{
    int data_2991;
    struct node* next_2991;
};
 
//Globally initialized head pointer
struct node* head = NULL;
 
//function prototyping
struct node* create_node(int);
void insert_begin(int);
void reverse_list();
void print();
int main()
{
    // Create some nodes and insert data into them 
	insert_begin(99);
    insert_begin(89);
    insert_begin(79);
    insert_begin(69);
    insert_begin(59);
    printf("Linked List before reversed: \n");
    print();
    reverse_list();
    printf("\nLinked List after reversed: \n");
    print();
    return 0;
}
 

// Creates a new node using the malloc function

struct node* create_node(int data_2991)
{
    struct node* new_node = (struct node*) malloc (sizeof(struct node));
    if (new_node == NULL)
    {
        printf("Memory can't be allocated for new node");
        return NULL;
    } 
    else
    {
        new_node -> data_2991 = data_2991;
        new_node -> next_2991 = NULL;
        return new_node;
    }
}
 
// insert a new node at the beginning of the list

void insert_begin(int data_2991)
{
    struct node* new_node = create_node(data_2991);
    if (new_node != NULL)
    {
        new_node -> next_2991 = head;
        head = new_node;
    }
}
 
// reverse the linked list

void reverse_list()
{
    if (head == NULL)
    {
        return;
    }
    struct node* temp = head;
    struct node* new_head = NULL;
 
    // create new nodes and insert them beginning
    while (temp != NULL)
    {
        struct node* new_node = create_node(temp->data_2991);
        new_node->next_2991 = new_head;
        new_head = new_node;
        temp = temp->next_2991;
    }
 
    // update the head with the new head
    head = new_head;
}
 
// prints the linked list

void print()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        printf("%d --> ", temp->data_2991);
        temp = temp->next_2991;
    }
    printf("NULL \n");
}