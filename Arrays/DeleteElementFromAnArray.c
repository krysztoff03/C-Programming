
/*
* Program that delete an element from an array.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i;
    int index;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter position in the array to delete: ");
    scanf("%d", &index);
    if(index == size + 1 || index <= 0)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for(i = index - 1;i < size - 1;++i)
        {
            array[i] = array[i + 1];
        }
    }
    printf("The new array is: ");
    for(i = 0;i < size - 1;++i)
        {
            printf("%d ", array[i]);
        }
    return 0;
}
