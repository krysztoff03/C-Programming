
/*
* Program that creates a linked list of 10 characters, then creates
* a copy of the list in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

struct listNode{
    int data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions();
void reverse(ListNodePtr *sPtr);


int main()
{
    ListNodePtr startPtr = NULL;
    unsigned int choice;
    char item;
    int i;
    srand(time(NULL));
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 4)
    {
        switch(choice)
        {
        case 1:
            printf("The random characters in LinkedList are: ");
            for(i = 1;i <= SIZE;++i)
            {
                item = 'a' + rand() % 26;
                insert(&startPtr, item);
            }
            printList(startPtr);
            break;
        case 2:
            if(!isEmpty(startPtr))
            {
                printf("Enter character to be deleted in LinkedList: ");
                scanf(" %c", &item);
                if(delete(&startPtr, item))
                {
                    printf("%c deleted.\n", item);
                    printList(startPtr);
                }
                else
                {
                    printf("%c not found.\n\n", item);
                }
            }
            else
            {
                printf("List is empty.\n");
            }
            break;
        case 3:
            printf("The LinkedList in reverse order is:");
            if(!isEmpty(startPtr))
            {
                reverse(&startPtr);
                printList(startPtr);
            }
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
    printf("Enter your choice.\n"
           "1 - insert characters into the LinkedList.\n"
           "2 - delete a character from the LinkedList.\n"
           "3 - reverse the elements from the LinkedList.\n"
           "4 - end.");
}

void insert(ListNodePtr *sPtr, char value)
{
    ListNodePtr newPtr;
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    newPtr = malloc(sizeof(ListNode));
    if(newPtr != NULL)
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;
        previousPtr = NULL;
        currentPtr = *sPtr;
        while(currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if(previousPtr == NULL)
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);
    }
}

char delete(ListNodePtr *sPtr, char value)
{
    ListNodePtr previousPtr;
    ListNodePtr currentPtr;
    ListNodePtr tempPtr;
    if(value == (*sPtr)->data)
    {
        tempPtr = *sPtr;
        *sPtr = (*sPtr)->nextPtr;
        free(tempPtr);
        return value;
    }
    else
    {
        previousPtr = *sPtr;
        currentPtr = (*sPtr)->nextPtr;
        while(currentPtr != NULL && currentPtr->data != value)
        {
            previousPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;
        }
        if(currentPtr != NULL)
        {
            tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }
    return '\0';
}

int isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}

void printList(ListNodePtr currentPtr)
{
    if(isEmpty(currentPtr))
    {
        printf("List is empty.\n");
    }
    else
    {
        printf("\nThe list is: ");
        while(currentPtr != NULL)
        {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

void reverse(ListNodePtr *sPtr)
{
    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = *sPtr;
    ListNodePtr nextPtr;
    while(currentPtr != NULL)
    {
        nextPtr = currentPtr->nextPtr;
        currentPtr->nextPtr = previousPtr;
        previousPtr = currentPtr;
        currentPtr = nextPtr;
    }
    *sPtr = previousPtr;
}





