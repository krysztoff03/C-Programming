
/*
* Program that separates even and odd elements in separate arrays.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM_SIZE 100

void printArray(int arr[], int lenght);

int main()
{
    int evenArray[MAXIMUM_SIZE], oddArray[MAXIMUM_SIZE];
    int i, size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter elements in the array:\n");
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    int evenCounter = 0, oddCounter = 0;
    for(i = 0;i < size;++i)
    {
        if(array[i] % 2 == 0)
        {
            evenArray[evenCounter] = array[i];
            ++evenCounter;
        }
        else
        {
            oddArray[oddCounter] = array[i];
            ++oddCounter;
        }
    }
    printf("\nElements of even array: ");
    printArray(evenArray, evenCounter);
    printf("\nElements of odd array: ");
    printArray(oddArray, oddCounter);


    return 0;
}

void printArray(int arr[], int length)
{
    int i;
    for(i = 0;i < length;++i)
    {
        printf("%d ", arr[i]);
    }
}
