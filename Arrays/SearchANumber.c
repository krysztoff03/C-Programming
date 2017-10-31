
/*
* Program that search for a number in the array.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i, number;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter elements in the array:\n");
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter number to search in the array: ");
    scanf("%d", &number);
    int flag = 0;
    for(i = 0;i < size;++i)
    {
        if(array[i] == number)
        {
            flag = 1;
            printf("%d is found at position %d\n", number, i + 1);
            break;
        }
    }
    if(flag = 0)
    {
        printf("%d was not found in the array.\n", number);
    }
    return 0;
}
