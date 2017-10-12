
/*
* Program that sums a sequence of integers. Assume that
* the first integer read with scanf specifies the number of
* values remaining to be entered. Your program should read
* only one value each time scanf is executed.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0, number, howMany;
    printf("enter how many numbers to sum up:\n");
    scanf("%d", &howMany);
    for(i = 1;i <= howMany;++i)
    {
        scanf("%d", &number);
        sum += number;
    }
    printf("the sum is %d\n", sum);
    return 0;
}
