
/*
* Program that defines and uses macro MINIMUM3 to determine
* the smallest of three numeric values.
*/

#include <stdio.h>
#include <stdlib.h>

#define MINIMUM2(x, y) (((x) < (y)) ? (x) : (y))
#define MINIMUM3(x, y, z) (MINIMUM2(MINIMUM2(x, y), z))

int main()
{
    int a, b, c, min3;
    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);
    min3 = MINIMUM3(a, b, c);
    printf("The minimum of %d, %d and %d is %d\n", a, b, c, min3);
    return 0;
}
