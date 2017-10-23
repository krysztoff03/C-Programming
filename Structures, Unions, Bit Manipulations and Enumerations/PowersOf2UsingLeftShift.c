
/*
* Program which calculates 2^n using left shift operator.
*/

#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int number = 2, p;
    printf("Enter the power to calculate 2^p= ");
    scanf("%u", &p);
    printf("The original value %u in binary is:\n");
    displayBits(number);
    printf("\nThe value left shifted with p - 1 bits (2^p) in binary is:\n");
    displayBits(number << (p - 1));

    return 0;
}

void displayBits(unsigned int value)
{
    unsigned int c, displayMask = 1 << 31;
    printf("%10u = ", value);
    for(c = 1;c <= 32;c++)
    {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1;
        if(c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar("\n");
}
