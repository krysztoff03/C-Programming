
/*
* Program that defines and uses macro SUMARRAY to sum the values
* in a numeric array. The macro should receive the array and the
* number of elements in the array as arguments.
*/

#include <stdio.h>
#include <stdlib.h>

#define SUMARRAY(arr, length) \
    int i, sum = 0; \
    for(i = 0;i < length;i++) \
    { \
        sum += arr[i]; }\
        printf("%d\n", sum);


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
    printf("Sum of elements from arr[%d] = ", size);
    SUMARRAY(arr, size);
    return 0;
}
