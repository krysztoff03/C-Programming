
/*
* Write a program that reads in the radius of a circle and
* prints the circle’s diameter, circumference and area. Use
* the constant value 3.14159 for π.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi = 3.14159;
    int radius;
    printf("enter circle's radius: ");
    scanf("%d", &radius);
    printf("circle's diameter is %d\n", radius * 2);
    printf("circle's circumference is %.2f\n", 2 * pi * radius);
    printf("circle's area is %.2f\n", pi * radius * radius);
    return 0;
}
