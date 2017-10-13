
/*
* A right triangle can have sides that are all integers. The set
* of three integer values for the sides of a right triangle is called
* a Pythagorean triple. These three sides must satisfy the
* relationship that the sum of the squares of two of the sides is
* equal to the square of the hypotenuse. Find all Pythagorean
* triples for side1, side2, and the hypotenuse all no larger than
* 500.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a, b, c, count = 0;
    printf("Pythagorean triple\n"
           "a\tb\tc\n\n");
    for(a = 1;a <= 50;a++)
    {
        for(b = 1;b <= 50;b++)
        {
            for(c = 1;c <= 50;c++)
            {
                if(a * a + b * b == c * c)
                {
                    printf("%d\t%d\t%d\n", a, b, c);
                    count++;
                }
            }
        }
    }
    printf("number of sides that satisfies the Pythagorean theorem is %d\n", count);
    return 0;
}
