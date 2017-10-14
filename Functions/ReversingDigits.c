
/*
* Program that takes an integer value and returns the number with
* its digits reversed.
*/

#include <stdio.h>
#include <stdlib.h>

int reverse(int n);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The reverse number of %d is %d\n", number, reverse(number));
    return 0;
}

int reverse(int n)
{
    int rev = 0, rem;
    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}









