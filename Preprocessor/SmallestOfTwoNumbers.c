
/*
* Program that defines and uses macro MINIMUM2 to determine
* the smallest of two numeric values.
*/

#include <stdio.h>
#include <stdlib.h>

#define MINIMUM2(x, y) (((x) < (y)) ? (x) : (y))

int main()
{
    int a, b, min;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    min = MINIMUM2(a, b);
    printf("The minimum of %d and %d is %d\n", a, b, min);
    return 0;
}
