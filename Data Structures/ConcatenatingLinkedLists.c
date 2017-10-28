
/*
* Program that concatenates two linked lists of characters. The
* program should include function concatenate that takes pointers
* to both lists as arguments and concatenates the second list to
* the first list.
*/

#include <stdio.h>
#include <stdlib.h>

struct listNode{
    char data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions();
void concatenate(ListNodePtr *sPtr1, ListNodePtr *sPtr2);

int main()
{
    ListNodePtr startPtr1 = NULL;
    ListNodePtr startPtr2 = NULL;
    unsigned int choice;
    char item;
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 6)
    {
        switch(choice)
        {
        case 1:
            printf("Enter a character in LinkedList1: ");
            scanf(" %c", &item);
            insert(&startPtr1, item);
            printList(startPtr1);
            break;
        case 2:
            if(!isEmpty(startPtr1))
            {
                printf("Enter character to be deleted in LinkedList1: ");
                scanf(" %c", &item);
                if(delete(&startPtr1, item))
                {
                    printf("%c deleted.\n", item);
                    printList(startPtr1);
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
            printf("Enter a character in LinkedList2: ");
            scanf(" %c", &item);
            insert(&startPtr2, item);
            printList(startPtr2);
            break;
        case 4:
            if(!isEmpty(startPtr2))
            {
                printf("Enter character to be deleted in LinkedList2: ");
                scanf(" %c", &item);
                if(delete(&startPtr2, item))
                {
                    printf("%c deleted.\n", item);
                    printList(startPtr2);
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
        case 5:
            printf("\nConcatenated List:\n");
            concatenate(&startPtr1, &startPtr2);
            printList(startPtr1);
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
           "1 - insert an element into the LinkedList1.\n"
           "2 - delete an element from the LinkedList1.\n"
           "3 - insert an element into the LinkedList2.\n"
           "4 - delete an element from the LinkedList2.\n"
           "5 - concatenate LinkedList1 and LinkedList2.\n"
           "6 - end.");
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
        printf("The list is: ");
        while(currentPtr != NULL)
        {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

void concatenate(ListNodePtr *sPtr1, ListNodePtr *sPtr2)
{
    ListNodePtr tempPtr;
    if(*sPtr1 == NULL)
    {
        *sPtr1 = *sPtr2;
    }
    else
    {
        if(*sPtr2 != NULL)
        {
            tempPtr = *sPtr1;
            while(tempPtr->nextPtr != NULL)
            {
                tempPtr = tempPtr->nextPtr;
            }
            tempPtr->nextPtr = *sPtr2;
        }
    }
}
