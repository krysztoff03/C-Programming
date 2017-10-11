
/*
* Input an integer (5 digits or fewer) containing only 0s and 1s
* (i.e., a “binary” integer) and print its decimal equivalent.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, decimal;
    int a, b, c, d, e;
    printf("enter a binary integer: ");
    scanf("%d", &number);
    a = number / 10000;
    b = number % 10000 / 1000;
    c = number % 1000 / 100;
    d = number % 100 / 10;
    e = number % 10;
    decimal = a * 16 + b * 8 + c * 4 + d * 2 + e * 1;
    printf("the number in decimal is %d\n", decimal);
    return 0;
}
