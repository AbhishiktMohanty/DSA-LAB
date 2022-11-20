// Q2. WAP to reverse the sequence elements in a double linked list.
// written

// #include <stdio.h>
// #include <stdlib.h>

// a node of the doubly linked list
struct Node_6_2
{
    int data;
    struct Node_6_2 *next,*prev;
};

// Function to reverse a Doubly Linked List
void reverse_6_2(struct Node_6_2 **head_ref)
{
    struct Node_6_2 *temp = NULL;
    struct Node_6_2 *current = *head_ref;

    // swap next and prev for all nodes of doubly linked list
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    /* Before changing head, check for the cases like empty
    list and list with only one node */
    if (temp != NULL)
        *head_ref = temp->prev;
}

/* UTILITY FUNCTIONS */
/* Function to insert a node at the beginning of the Doubly
 * Linked List */
void push_6_2(struct Node_6_2 **head_ref, int new_data)
{
    /* allocate node */
    struct Node_6_2 *new_node = (struct Node_6_2 *)malloc(sizeof(struct Node_6_2));

    /* put in the data */
    new_node->data = new_data;

    /* since we are adding at the beginning,
    prev is always NULL */
    new_node->prev = NULL;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

/* Function to print nodes in a given doubly linked list
This function is same as printList() of singly linked
list */
void printList_6_2(struct Node_6_2 *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Driver's code
int main_6_2()
{
    /* Start with the empty list */
    struct Node_6_2 *head = NULL;

    /* Let us create a sorted linked list to test the
    functions Created linked list will be 10->8->4->2 */
    push_6_2(&head, 2);
    push_6_2(&head, 5);
    push_6_2(&head, 7);
    push_6_2(&head, 9);
    push_6_2(&head, 10);

    printf("Original Linked list: ");
    printList_6_2(head);

    // Function call
    reverse_6_2(&head);

    printf("\nReversed Linked list: ");
    printList_6_2(head);

    getchar();
}