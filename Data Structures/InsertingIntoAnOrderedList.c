
/*
* Program that inserts 25 random integers from 0 to 100 in order
* in a linked list. The program should calculate the sum of the
* elements and the floatingpoint average of the elements.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25

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
int sumLinkedList(ListNodePtr sPtr);
double averageLinkedList(ListNodePtr sPtr);

int main()
{
    ListNodePtr startPtr = NULL;
    unsigned int choice;
    int item, i;
    int sum = 0;
    double average = 0.0;
    srand(time(NULL));
    instructions();
    printf("? ");
    scanf("%u", &choice);
    while(choice != 5)
    {
        switch(choice)
        {
        case 1:
            printf("The random integers in LinkedList are: ");
            for(i = 1;i <= SIZE;++i)
            {
                item = rand() % 101;
                insert(&startPtr, item);
            }
            printList(startPtr);
            break;
        case 2:
            if(!isEmpty(startPtr))
            {
                printf("Enter integer to be deleted in LinkedList: ");
                scanf(" %d", &item);
                if(delete(&startPtr, item))
                {
                    printf("%d deleted.\n", item);
                    printList(startPtr);
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
            if(isEmpty(startPtr))
            {
                printf("The sum of LinkedList's elements is %d.\n", sum);
            }
            else
            {
                if(!isEmpty(startPtr))
                {
                    sum = sumLinkedList(startPtr);
                    printf("The sum of LinkedList's elements is %d.\n", sum);
                }
            }
            break;
        case 4:
            if(isEmpty(startPtr))
            {
                printf("The average of LinkedList's elements is %.2f\n", average);
            }
            else
            {
                if(!isEmpty(startPtr))
                {
                    average = averageLinkedList(startPtr);
                    printf("The average of LinkedList's elements is %.2f\n", average);
                }
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
           "1 - insert elements into the LinkedList.\n"
           "2 - delete an element from the LinkedList.\n"
           "3 - calculate sum of elements from the LinkedList.\n"
           "4 - calculate average of elements from the LinkedList.\n"
           "5 - end.");
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
        printf("\nThe list is: ");
        while(currentPtr != NULL)
        {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }
        printf("NULL\n");
    }
}

int sumLinkedList(ListNodePtr sPtr)
{
    ListNodePtr currentPtr = sPtr;
    int total = 0;
    while(currentPtr != NULL)
    {
        total += currentPtr->data;
        currentPtr = currentPtr->nextPtr;
    }
    return total;
}

double averageLinkedList(ListNodePtr sPtr)
{
    ListNodePtr currentPtr = sPtr;
    double averageList = 0.0;
    averageList = (double)sumLinkedList(currentPtr) / SIZE;
    return averageList;
}

