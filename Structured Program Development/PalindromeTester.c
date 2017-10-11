
/*
* A palindrome is a number or a text phrase that reads the same backward
* as forward. For example, each of the following five-digit integers is a
* palindrome: 12321, 55555, 45554 and 11611.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, reversedNumber = 0, originalNumber, remainder;
    printf("enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    while(number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if(originalNumber == reversedNumber)
    {
        printf("%d is a palindrome.\n", originalNumber);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNumber);
    }
    return 0;
}
