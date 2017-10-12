
/*
* Program that finds the smallest of several integers. Assume that
the first value read specifies the number of values remaining.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, number, howMany, smallest;
    printf("enter how many numbers to search for:\n");
    scanf("%d", &howMany);
    smallest = number;
    for(i = 1;i <= howMany;i++)
    {
        scanf("%d", &number);
        if(number < smallest)
            smallest = number;
    }
    printf("the smallest number is %d\n", smallest);
    return 0;
}
