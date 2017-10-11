
/*
* Program that reads three nonzero integers and determines
* and prints whether they could be the sides of a right triangle.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("enter three sides of a triangle: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a * a + b * b == c * c)
    {
        printf("the triangle with sides of %d, %d and %d is a right triangle.\n", a, b, c);
    }
    else
        printf("the triangle with sides of %d, %d and %d is not a right triangle.\n", a, b, c);
    return 0;
}
