
/*
* Program which use bitwise AND, OR, XOR, shift left and right.
*/

#include <stdio.h>
#include <stdlib.h>

void displayBits(unsigned int value);

int main()
{
    unsigned int number1, number2, mask, setBits;
    number1 = 65535;
    mask = 1;
    printf("The result of combining the following\n");
    displayBits(number1);
    printf("\n");
    displayBits(mask);
    printf("\nusing the bitwise AND operator & is:\n");
    displayBits(number1 & mask);
    printf("\n");

    number1 = 15;
    setBits = 241;
    printf("The result of combining the following\n");
    displayBits(number1);
    printf("\n");
    displayBits(setBits);
    printf("\nusing the bitwise OR operator | is:\n");
    displayBits(number1 | setBits);
    printf("\n");

    number1 = 139;
    number2 = 199;
    printf("The result of combining the following\n");
    displayBits(number1);
    printf("\n");
    displayBits(number2);
    printf("\nusing the bitwise exclusive OR operator ^ is:\n");
    displayBits(number1 ^ number2);
    printf("\n");

    number1 = 21845;
    printf("The one's complement of\n");
    displayBits(number1);
    printf("\nis\n");
    displayBits(~number1);
    printf("\n");

    number1 = 960;
    printf("\nThe result of left shifting\n");
    displayBits(number1);
    printf("\n8 bit positions using the left shift operator << is\n");
    displayBits(number1 << 8);
    printf("\n");

    printf("\nThe result of right shifting\n");
    displayBits(number1);
    printf("\n8 bit positions using the right shift operator >> is\n");
    displayBits(number1 >> 8);
    printf("\n");
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







