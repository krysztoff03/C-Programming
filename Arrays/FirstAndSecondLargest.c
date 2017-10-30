
/*
* Program that prints first and second largest numbers.
*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size, i;
    int firstMax, secondMax;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    for(i = 0;i < size;++i)
    {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    firstMax = array[0];
    secondMax = array[0];
    for(i = 0;i < size;++i)
    {
        if(array[i] > firstMax)
        {
            secondMax = firstMax;
            firstMax = array[i];
        }
        else if(array[i] > secondMax && array[i] < firstMax)
        {
            secondMax = array[i];
        }
    }
    printf("First largest number is %d\n", firstMax);
    printf("Second largest number is %d\n", secondMax);
    return 0;
}
