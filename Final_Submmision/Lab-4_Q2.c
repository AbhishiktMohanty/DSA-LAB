//Q2. WAP to display the contents of a linked list if reverse order.

// #include<stdio.h>
// #include<malloc.h>

// A linked list node

struct node_4_2
{
    int data_2991;
    struct node_4_2* next_2991;
};
 
//Globally initialized head pointer
struct node_4_2* head = NULL;
 
//function prototyping
struct node_4_2* create_node_4_2(int);
void insert_begin_4_2(int);
void reverse_list_4_2();
void display_4_2();
int main_4_2()
{
    // Create some nodes and insert data into them 
	insert_begin_4_2(99);
    insert_begin_4_2(89);
    insert_begin_4_2(79);
    insert_begin_4_2(69);
    insert_begin_4_2(59);
    printf("Linked List before reversed: \n");
    display_4_2();
    reverse_list_4_2();
    printf("\nLinked List after reversed: \n");
    display_4_2();
    return 0;
}
 

// Creates a new node using the malloc function

struct node_4_2* create_node_4_2(int data_2991)
{
    struct node_4_2* new_node = (struct node_4_2*) malloc (sizeof(struct node_4_2));
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

void insert_begin_4_2(int data_2991)
{
    struct node_4_2* new_node = create_node_4_2(data_2991);
    if (new_node != NULL)
    {
        new_node -> next_2991 = head;
        head = new_node;
    }
}
 
// reverse the linked list

void reverse_list_4_2()
{
    if (head == NULL)
    {
        return;
    }
    struct node_4_2* temp = head;
    struct node_4_2* new_head = NULL;
 
    // create new nodes and insert them beginning
    while (temp != NULL)
    {
        struct node_4_2* new_node = create_node_4_2(temp->data_2991);
        new_node->next_2991 = new_head;
        new_head = new_node;
        temp = temp->next_2991;
    }
 
    // update the head with the new head
    head = new_head;
}
 
// prints the linked list

void display_4_2()
{
    struct node_4_2* temp = head;
    while (temp != NULL)
    {
        printf("%d --> ", temp->data_2991);
        temp = temp->next_2991;
    }
    printf("NULL \n");
}