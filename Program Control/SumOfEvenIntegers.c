
/*
* Program that calculates and prints the sum
* of the even integers from 2 to 30.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, sum = 0;
    for(i = 2;i <= 30;i += 2)
    {
        sum += i;
    }
    printf("the sum of even integers is %d\n", sum);
    return 0;
}
