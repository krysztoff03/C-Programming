
/*
* Program that prints the number of even and odd elements in the array.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i, countEven = 0, countOdd = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    for(i = 0;i < size;++i)
    {
        if(array[i] % 2 == 0)
        {
            ++countEven;
        }
        else
            ++countOdd;
    }
    printf("The number of even elements in the array is %d\n", countEven);
    printf("The number of odd elements in the array is %d\n", countOdd);
    return 0;
}
