
/*
* Define a function called hypotenuse that calculates the length
* of the hypotenuse of a right triangle when the other two sides
* are given.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hypothenuse(double s1, double s2);

int main()
{
    double side1, side2, hypo;
    printf("Enter side 1 and side 2: ");
    scanf("%lf%lf", &side1, &side2);
    while(side1 != -1 || side2 != -1)
    {
        hypo = hypothenuse(side1, side2);
        printf("The triangle with %.1f and %.1f have"
               " a hypothenuse = %.1f\n", side1, side2, hypo);
        printf("\nEnter side 1 and side 2: ");
        scanf("%lf%lf", &side1, &side2);
    }
    return 0;
}

double hypothenuse(double s1, double s2)
{
    return sqrt((s1 * s1) + (s2 * s2));
}
