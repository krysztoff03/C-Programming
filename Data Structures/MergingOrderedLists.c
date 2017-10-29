
/*
* Program that merges two ordered lists of integers into a single
* ordered list of integers. Function merge should receive pointers
* to the first node of each of the lists to be merged and return a
* pointer to the first node of the merged list.
*/

#include <stdio.h>
#include <stdlib.h>

struct listNode{
    int data;
    struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, int value);
char delete(ListNodePtr *sPtr, int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions();
ListNodePtr merge(ListNodePtr sPtr1, ListNodePtr sPtr2);

int main()
{
    ListNodePtr startPtr1 = NULL;
    ListNodePtr startPtr2 = NULL;
    unsigned int choice;
    int item;
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 6)
    {
        switch(choice)
        {
        case 1:
            printf("Enter an integer in LinkedList1: ");
            scanf(" %d", &item);
            insert(&startPtr1, item);
            printList(startPtr1);
            break;
        case 2:
            if(!isEmpty(startPtr1))
            {
                printf("Enter integer to be deleted in LinkedList1: ");
                scanf(" %d", &item);
                if(delete(&startPtr1, item))
                {
                    printf("%d deleted.\n", item);
                    printList(startPtr1);
                }
                else
                {
                    printf("%d not found.\n\n", item);
                }
            }
            else
            {
                printf("List is empty.\n");
            }
            break;
        case 3:
            printf("Enter an integer in LinkedList2: ");
            scanf(" %d", &item);
            insert(&startPtr2, item);
            printList(startPtr2);
            break;
        case 4:
            if(!isEmpty(startPtr2))
            {
                printf("Enter integer to be deleted in LinkedList2: ");
                scanf(" %d", &item);
                if(delete(&startPtr2, item))
                {
                    printf("%d deleted.\n", item);
                    printList(startPtr2);
                }
                else
                {
                    printf("%d not found.\n\n", item);
                }
            }
            else
            {
                printf("List is empty.\n");
            }
            break;
        case 5:
            if(isEmpty(startPtr1) && isEmpty(startPtr2))
            {
                printf("LinkedList1 and LinkedList2 are empty.\n");
            }
            else if(isEmpty(startPtr1))
            {
                printf("LinkedList1 is empty.\n");
            }
            else if(isEmpty(startPtr2))
            {
                printf("LinkedList2 is empty.\n");
            }
            else
            {
                printList(startPtr1);
                printList(startPtr2);
                printf("Merged Lists: ");
                printList(merge(startPtr1, startPtr2));
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
           "1 - insert an element into the LinkedList1.\n"
           "2 - delete an element from the LinkedList1.\n"
           "3 - insert an element into the LinkedList2.\n"
           "4 - delete an element from the LinkedList2.\n"
           "5 - merge LinkedList1 and LinkedList2.\n"
           "6 - end.");
}

void insert(ListNodePtr *sPtr, int value)
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
        printf("%d not inserted. No memory available.\n", value);
    }
}

char delete(ListNodePtr *sPtr, int value)
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
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

ListNodePtr merge(ListNodePtr sPtr1, ListNodePtr sPtr2)
{
    ListNode merge;
    ListNodePtr mergePtr = &merge;
    while(sPtr1 != NULL && sPtr2 != NULL)
    {
        if(sPtr1->data < sPtr2->data)
        {
            mergePtr->nextPtr = sPtr1;
            sPtr1 = sPtr1->nextPtr;
            mergePtr = mergePtr->nextPtr;
        }
        else if(sPtr2->data < sPtr1->data)
        {
            mergePtr->nextPtr = sPtr2;
            sPtr2 = sPtr2->nextPtr;
            mergePtr = mergePtr->nextPtr;
        }
    }
    if(sPtr1 == NULL)
    {
        mergePtr->nextPtr = sPtr2;
    }
    if(sPtr2 == NULL)
    {
        mergePtr->nextPtr = sPtr1;
    }
    return merge.nextPtr;
}
