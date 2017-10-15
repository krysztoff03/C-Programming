
/*
* Program that multiply two numbers recursively.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int multiply(unsigned int a, unsigned int b);

int main()
{
    unsigned int x, y;
    printf("Enter two positive numbers: ");
    scanf("%u%u", &x, &y);
    printf("The result is %u\n", multiply(x, y));
    return 0;
}
unsigned int multiply(unsigned int a, unsigned int b)
{
    if(1 == b)
        return a;
    else
    {
        return a + multiply(a, b - 1);
    }
}






