
/*
* Program that prints all negative numbers in an array.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("\narray[%d] = ", size);
    for(i = 0;i < size;++i)
    {
        if(array[i] < 0)
        {
            printf("%d ", array[i]);
        }
    }
    return 0;
}
