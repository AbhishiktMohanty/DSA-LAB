// Q4. WAP to convert an infix expression into its equivalent prefix notation.

#include<string.h> 
#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
# define MAX 100

// A structure to represent a stack 
struct Stack { 
    int top; 
    int maxSize;
    // we are storing string in integer array, this will not give error
    // as values will be stored in ASCII and returned in ASCII thus, returned as string again
    int* array; 
}; 

struct Stack* create(int max) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->maxSize = max; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->maxSize * sizeof(int));
    return stack; 
} 

// Checking with this function is stack is full or not
// Will return true is stack is full else false 
//Stack is full when top is equal to the last index 
int isFull(struct Stack* stack) 
{ 
    if(stack->top == stack->maxSize - 1){
        printf("Will not be able to push maxSize reached\n");
    }
    // Since array starts from 0, and maxSize starts from 1
    return stack->top == stack->maxSize - 1; 
} 

// By definition the Stack is empty when top is equal to -1 
// Will return true if top is -1
int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1; 
}

// Push function here, inserts value in stack and increments stack top by 1
void push(struct Stack* stack, char item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
}

// Function to remove an item from stack.  It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 

// Function to return the top from stack without removing it 
int peek(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
} 

// A utility function to check if the given character is operand 
int checkIfOperand(char ch) 
{ 
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 

// Fucntion to compare precedence
// If we return larger value means higher precedence 
int prec(char ch) 
{ 
    switch (ch) 
    { 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 

// The driver function for infix to postfix conversion 
int getPostfix(char* exp) 
{ 
    int i, j; 

    // Stack size should be equal to expression size for safety  
    struct Stack* stack = create(strlen(exp)); 
    if(!stack) // just checking is stack was created or not  
        return -1 ; 

    for (i = 0, j = -1; exp[i]; ++i) 
    { 
        // Here we are checking is the character we scanned is operand or not
        // and this adding to to output. 
        if (checkIfOperand(exp[i])) 
            exp[++j] = exp[i]; 

        // Here, if we scan character ‘(‘, we need push it to the stack. 
        else if (exp[i] == '(') 
            push(stack, exp[i]); 

        // Here, if we scan character is an ‘)’, we need to pop and print from the stack  
        // do this until an ‘(‘ is encountered in the stack. 
        else if (exp[i] == ')')
        { 
            while (!isEmpty(stack) && peek(stack) != '(') 
                exp[++j] = pop(stack); 
            if (!isEmpty(stack) && peek(stack) != '(') 
                return -1; // invalid expression              
            else
                pop(stack); 
        } 
        else // if an opertor
        { 
            while (!isEmpty(stack) && prec(exp[i]) <= prec(peek(stack))) 
                exp[++j] = pop(stack); 
            push(stack, exp[i]); 
        } 

    } 

    // Once all inital expression characters are traversed
    // adding all left elements from stack to exp
    while (!isEmpty(stack)) 
        exp[++j] = pop(stack); 

    exp[++j] = '\0'; 
    
}

void reverse(char *exp){

    int size = strlen(exp);
    int j = size, i=0;
    char temp[size];

    temp[j--]='\0';
    while(exp[i]!='\0')
    {
        temp[j] = exp[i];
        j--;
        i++;
    }
    strcpy(exp,temp);
}
void brackets(char* exp){
    int i = 0;
    while(exp[i]!='\0')
    {
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
void InfixtoPrefix(char *exp){

    int size = strlen(exp);

    // reverse string
    reverse(exp);
    //change brackets
    brackets(exp);
    //get postfix
    getPostfix(exp);
    // reverse string again
    reverse(exp);
}

int main()
{    
    //printf("The infix is: ");

    char exp[40]; //= "((a/b)+c)-(d+(e*f))"; 
    printf("Enter the infix expression: ");
    scanf("%s", &exp);
    // printf("%s\n",expression);
    InfixtoPrefix(exp); 

    printf("The prefix is: ");
    printf("%s\n",exp);

    return 0; 
}

// output input
// The infix is: ((a/b)+c)-(d+(e*f))
// The prefix is: -+/abc+d*ef