
/*
* Program with a function multiple that determines for a pair of
* integers whether the second integer is a multiple of the first.
* The function should take two integer arguments and return 1 (true)
* if the second is a multiple of the first, and 0 (false) otherwise.
*/

#include <stdio.h>
#include <stdlib.h>

int multiple(int a, int b);

int main()
{
    int x, y;
    printf("Enter a pair of integers: ");
    scanf("%d%d", &x, &y);
    if(multiple(x, y) == 1)
    {
        printf("%d is a multiple of %d\n", y, x);
    }
    else
    {
        printf("%d is not a multiple of %d\n", y, x);
    }
    return 0;
}
int multiple(int a, int b)
{
    if(b % a == 0)
        return 1;
    else
        return 0;
}


