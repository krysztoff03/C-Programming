
/*
* Program that inputs an integer between 1 and 32767 and prints it
* as a series of digits, with two spaces between each digit.
*/

#include <stdio.h>
#include <stdlib.h>

void printDigits(int n);

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    printDigits(number);
    return 0;
}
void printDigits(int n)
{
    int temp, factor = 1;
    temp = n;
    while(temp)
    {
        temp /= 10;
        factor *= 10;
    }
    printf("The number %d digits are: ", n);
    while(factor > 1)
    {
        factor /= 10;
        printf("%d  ", n / factor);
        n %= factor;
    }
}





