
/*
* Program that calculates and prints the
* product of the odd integers from 1 to 15.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, product = 1;
    for(i = 1;i <= 15;i += 2)
    {
        product *= i;
    }
    printf("the product of even integers is %d\n", product);
    return 0;
}
