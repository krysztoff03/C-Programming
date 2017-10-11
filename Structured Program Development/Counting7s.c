
/*
* Program that reads an integer (5 digits or fewer) and determines
* and prints how many digits in the integer are 7s.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int counter = 0;
    int a, b, c, d, e;
    printf("enter number: ");
    scanf("%d", &number);
    a = number / 10000;
    b = number % 10000 / 1000;
    c = number % 1000 / 100;
    d = number % 100 / 10;
    e = number % 10;
    if(a == 7)
       counter++;
    if(b == 7)
        counter++;
    if(c == 7)
        counter++;
    if(d == 7)
        counter++;
    if(e == 7)
        counter++;
    printf("the number of 7s in %d is %d\n", number, counter);

    return 0;
}
