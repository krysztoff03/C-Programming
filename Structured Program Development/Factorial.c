
/*
* Progrm that calculates the factorial of a number. The
* factorial of a nonnegative integer n is written n!
* (pronounced “n factorial”).
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, n, result = 1;
    printf("enter a number: ");
    scanf("%d", &number);
    n = number;
    while(number > 0)
        {
            result *= number;
            number--;
        }
    printf("factorial for %d is %d\n", n, result);
    return 0;
}
