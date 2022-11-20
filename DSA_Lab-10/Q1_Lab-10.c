/* 1. Write the following menu driven program for the binary search tree

----------------------------------------
Binary Search Tree Menu
----------------------------------------
0. Quit
1. Create
2. In-Order Traversal
3. Pre-Order Traversal
4. Post-Order traversal
5. Search
6. Find Smallest Element
7. Find Largest Element
8. Deletion of Tree
----------------------------------------
Enter your choice: */

#include <stdio.h>
#include <stdlib.h>
 
struct node
{
    int value;
    struct node *l;
    struct node *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
void delete1();
void insert();
void delete();
void inorder(struct node *t);
void create();
void search(struct node *t);
void preorder(struct node *t);
void postorder(struct node *t);
void search1(struct node *t,int data);
int smallest(struct node *t);
int largest(struct node *t);
 
int flag = 1;

int main(){
    int ch;

    printf("---------------------------------------\n\tBinary Search Tree Menu\n---------------------------------------");
    printf("\n\t0. Quit\n\t1. Create\n\t2. In-Order Traversal\n\t3. Pre-Order Traversal\n");
    printf("\t4. Post-Order traversal\n\t5. Search\n\t6. Find Smallest Element\n");
    printf("\t7. Find Largest Element\n\t8. Deletion of Tree\n---------------------------------------");
    
    while (1){
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        case 8:
            
            break;
        
        default:
            printf("Wrong choice, Please enter correct choice.");
            break;
        }
    }
    
}