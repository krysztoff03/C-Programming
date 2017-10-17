
/*
* Putting values into an array, sorting the values into
* ascending order and printing the resulting array.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort(int *const array, size_t size);

int main()
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    size_t i;
    printf("data items in original order\n");
    for(i = 0;i < SIZE;++i)
    {
        printf("%d  ", a[i]);
    }
    bubbleSort(a, SIZE);
    printf("\ndata items in ascending order\n");
    for(i = 0;i < SIZE;++i)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int *const array, size_t size)
{
    void swap(int *element1Ptr, int *element2Ptr);
    unsigned int pass;
    size_t j;
    for(pass = 0;pass < size - 1;++pass)
    {
        for(j = 0;j < size - 1;++j)
        {
            if(array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
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


