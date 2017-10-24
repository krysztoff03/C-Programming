
/*
* Program that defines macro SUM with two arguments, x and y.
*/

#include <stdio.h>
#include <stdlib.h>

#define SUM(x, y) (x + y)

int main()
{
    int a, b, sum = 0;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    sum = SUM(a, b);
    printf("The sum of %d and %d = %d\n", a, b, sum);
    return 0;
}
