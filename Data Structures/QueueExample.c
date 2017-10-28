
/*
* Enqueue and dequeue values from a queue.
*/

#include <stdio.h>
#include <stdlib.h>

struct queueNode{
    char data;
    struct queueNode *nextPtr;
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value);
void instructions();

int main()
{
    QueueNodePtr headPtr = NULL, tailPtr = NULL;
    unsigned int choice;
    char item;
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 3)
    {
        switch(choice)
        {
        case 1:
            printf("Enter a character: ");
            scanf(" %c", &item);
            enqueue(&headPtr, &tailPtr, item);
            printQueue(headPtr);
            break;
        case 2:
            if(!isEmpty(headPtr))
            {
                item = dequeue(&headPtr, &tailPtr);
                printf("%c has been dequeued.\n", item);
            }
            printQueue(headPtr);
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
    printf("Enter your choice:\n"
           "1 - add an intem to the queue\n"
           "2 - remove an item from the queue\n"
           "3 - end.\n");
}

void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
    QueueNodePtr newPtr;
    newPtr = malloc(sizeof(QueueNode));
    if(newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;
        if(isEmpty(*headPtr))
        {
            *headPtr = newPtr;
        }
        else
        {
            (*tailPtr)->nextPtr = newPtr;
        }
        *tailPtr = newPtr;
    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);
    }
}

char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
    char value;
    QueueNodePtr tempPtr;
    value = (*headPtr)->data;
    tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;
    if(*headPtr == NULL)
    {
        *tailPtr = NULL;
    }
    free(tempPtr);
    return value;
}

int isEmpty(QueueNodePtr headPtr)
{
    return headPtr == NULL;
}

void printQueue(QueueNodePtr currentPtr)
{
    if(currentPtr == NULL)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("The queue is: ");
        while(currentPtr != NULL)
        {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}
