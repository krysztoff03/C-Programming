
/*
* Program that calculate power(base, exponent) recursively.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int power(int base, int exponent);

int main()
{
    int b, e;
    printf("Enter base and exponent: ");
    scanf("%d%d", &b, &e);
    printf("(%d, %d) = %d\n", b, e, power(b, e));
    return 0;
}

int power(int base, int exponent)
{
    if(exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}









