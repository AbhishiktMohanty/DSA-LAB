// Q4. WAP to remove the duplicates in a sorted double linked list.
// done 
// written

// #include <stdio.h>
// #include <stdlib.h>
// Represent a node of the doubly linked list
struct node_6_4
{
    int data;
    struct node_6_4 *previous;
    struct node_6_4 *next;
};

// Represent the head and tail of the doubly linked list
struct node_6_4 *head, *tail = NULL;

// addNode() will add a node to the list
void addNode_6_4(int data)
{
    // Create a new node
    struct node_6_4 *newNode = (struct node_6_4 *)malloc(sizeof(struct node_6_4));
    newNode->data = data;

    // If list is empty
    if (head == NULL)
    {
        // Both head and tail will point to newNode
        head = tail = newNode;
        // head's previous will point to NULL
        head->previous = NULL;
        // tail's next will point to NULL, as it is the last node of the list
        tail->next = NULL;
    }
    else
    {
        // newNode will be added after tail such that tail's next will point to newNode
        tail->next = newNode;
        // newNode's previous will point to tail
        newNode->previous = tail;
        // newNode will become new tail
        tail = newNode;
        // As it is last node, tail's next will point to NULL
        tail->next = NULL;
    }
}

// removeDuplicateNode() will remove duplicate nodes from the list
void removeDuplicateNode_6_4()
{
    // Node current will point to head
    struct node_6_4 *current, *index, *temp;

    // Checks whether list is empty
    if (head == NULL)
    {
        return;
    }
    else
    {
        // Initially, current will point to head node
        for (current = head; current != NULL; current = current->next)
        {
            // index will point to node next to current
            for (index = current->next; index != NULL; index = index->next)
            {
                if (current->data == index->data)
                {
                    // Store the duplicate node in temp
                    temp = index;
                    // index's previous node will point to node next to index thus, removes the duplicate node
                    index->previous->next = index->next;
                    if (index->next != NULL)
                        index->next->previous = index->previous;
                    // Delete duplicate node by making temp to NULL
                    temp = NULL;
                }
            }
        }
    }
}

// display() will print out the nodes of the list
void display_6_4()
{
    // Node current will point to head
    struct node_6_4 *current = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (current != NULL)
    {
        // Prints each node by incrementing pointer.
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main_6_4()
{
    // Add nodes to the list
    addNode_6_4(1);
    addNode_6_4(2);
    addNode_6_4(3);
    addNode_6_4(2);
    addNode_6_4(2);
    addNode_6_4(4);
    addNode_6_4(5);
    addNode_6_4(3);

    printf("Originals list: \n");
    display_6_4();

    // Removes duplicate nodes
    removeDuplicateNode_6_4();

    printf("List after removing duplicates: \n");
    display_6_4();

    return 0;
}