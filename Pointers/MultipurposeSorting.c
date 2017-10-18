
/*
* Multipurpose sorting program using function pointers.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort(int work[], size_t size, int (*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main()
{
    int order;
    size_t counter;

    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    printf("Enter 1 to sort in ascending order\n"
           "Enter 2 to sort in descending order: ");
    scanf("%d", &order);
    printf("\nData items in original order:\n");
    for(counter = 0;counter < SIZE;counter++)
    {
        printf("%d\t", a[counter]);
    }
    if(order == 1)
    {
        bubbleSort(a, SIZE, ascending);
        printf("\nData items in ascending order\n");
    }
    else
    {
        bubbleSort(a, SIZE, descending);
        printf("\nData items in descending order\n");
    }
    for(counter = 0;counter < SIZE;counter++)
    {
        printf("%d\t", a[counter]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int work[], size_t size, int (*compare)(int a, int b))
{
    unsigned int pass;
    size_t count;
    void swap(int *element1Ptr, int *element2Ptr);
    for(pass = 1;pass < size;pass++)
    {
        for(count = 0;count < size - 1;count++)
        {
            if((*compare)(work[count], work[count + 1]))
            {
                swap(&work[count], &work[count + 1]);
            }
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr)
{
    int hold;
    hold = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = hold;
}

int ascending(int a, int b)
{
    return b < a;
}

int descending(int a, int b)
{
    return b > a;
}







