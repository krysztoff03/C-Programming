
/*
* Program that insert an element into an array.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i;
    int number, index;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("Enter number to insert into the array: ");
    scanf("%d", &number);
    printf("Enter position of the number in the array: ");
    scanf("%d", &index);
    if(index > size + 1 || index <= 0)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for(i = size;i >= index;i--)
        {
            array[i] = array[i - 1];
        }
        array[index - 1] = number;
        printf("The new array is: ");
        for(i = 0;i < size + 1;++i)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
