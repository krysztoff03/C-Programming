
/*
* Program that copies all elements from an array to another array.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i;
    printf("Enter array A size: ");
    scanf("%d", &size);
    int arrayA[size], arrayB[size];
    for(i = 0;i < size;++i)
    {
        printf("arrayA[%d] = ", i);
        scanf("%d", &arrayA[i]);
        arrayB[i] = arrayA[i];
    }
    printf("\narrayA[%d] = ", size);
    for(i = 0;i < size;++i)
    {
        printf("%d ", arrayA[i]);
    }
    printf("\narrayB[%d] = ", size);
    for(i = 0;i < size;++i)
    {
        printf("%d ", arrayB[i]);
    }
    return 0;
}
