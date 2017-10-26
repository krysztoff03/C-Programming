
/*
* Push and pop values from a stack.
*/

#include <stdio.h>
#include <stdlib.h>

struct stackNode{
    int data;
    struct stackNode *nextPtr;
};

typedef struct stackNode StackNode;
typedef StackNode *StackNodePtr;

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions();

int main()
{
    StackNodePtr stackPtr = NULL;
    unsigned int choice;
    int value;
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 3)
    {
        switch(choice)
        {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &value);
            push(&stackPtr, value);
            printStack(stackPtr);
            break;
        case 2:
            if(!isEmpty(stackPtr))
            {
                printf("The popped value is %d.\n", pop(&stackPtr));
            }
            printStack(stackPtr);
            break;
        default:
            printf("Invalid choice.\n");
            instructions();
            break;
        }
        printf("? ");
        scanf("%u", &choice);
    }
    printf("End of run.\n");
    return 0;
}

void instructions()
{
    printf("Enter choice.\n"
           "1 - push a value on the stack.\n"
           "2 - pop a value off the stack.\n"
           "3 - end.");
}

void push(StackNodePtr *topPtr, int info)
{
    StackNodePtr newPtr;
    newPtr = malloc(sizeof(StackNode));
    if(newPtr != NULL)
    {
        newPtr->data = info;
        newPtr->nextPtr = *topPtr;
        *topPtr = newPtr;
    }
    else
    {
        printf("%d not inserted. No memory available.\n", info);
    }
}

int pop(StackNodePtr *topPtr)
{
    StackNodePtr tempPtr;
    int popValue;
    tempPtr = *topPtr;
    popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

void printStack(StackNodePtr currentPtr)
{
    if(currentPtr == NULL)
    {
        printf("The stack is empty.\n");
    }
    else
    {
        printf("The stack is: ");
        while(currentPtr != NULL)
        {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

int isEmpty(StackNodePtr topPtr)
{
    return topPtr == NULL;
}
