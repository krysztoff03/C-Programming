
/*
* Program that calculates sum of the array elements recursively.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int func(const int b[], size_t p);

int main()
{
    int x;
    int a[SIZE] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    x = func(a, SIZE);
    printf("Result is %d\n", x);
    return 0;
}
int func(const int b[], size_t p)
{
    if(1 == p)
    {
        return b[0];
    }
    else
    {
        return b[p - 1] + func(b, p - 1);
    }
}








