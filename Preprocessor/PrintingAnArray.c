
/*
* Program that defines and uses macro PRINTARRAY to print an array
* of integers. The macro should receive the array and the number of
* elements in the array as arguments.
*/

#include <stdio.h>
#include <stdlib.h>

#define PRINTARRAY(arr, length) \
    int i; \
    for(i = 0;i < length;i++) \
        printf("%d ", arr[i]);


int main()
{
    int count, size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    int arr[size];
    for(count = 0;count < size;count++)
    {
        printf("arr[%d] = ", count);
        scanf("%d", &arr[count]);
    }
    printf("\n");
    printf("arr[%d] = ", size);
    PRINTARRAY(arr, size);
    return 0;
}
