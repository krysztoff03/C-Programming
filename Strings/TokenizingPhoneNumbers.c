
/*
* Program that inputs a telephone number as a string in the form
* (555) 555-5555. The program should use function strtok to extract
* the area code as a token, the first three digits of the phone number
* as a token and the last four digits of the phone number as a token.
* The seven digits of the phone number should be concatenated into
* one string. The program should convert the area-code string to int
* and convert the phone-number string to long. Both the area code and
* the phone number should be printed.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 30

int main()
{
    char string[SIZE];
    char area[4] = {0};
    char number[10] = {0};
    char *tokenPtr;
    printf("Enter a phone number (ex. (555) 555-5555): ");
    gets(string);

    tokenPtr = strtok(string, "() - ");
    if(tokenPtr != NULL)
    {
        strncat(area, tokenPtr, sizeof area - 1);
    }
    tokenPtr = strtok(NULL, "() - ");
    if(tokenPtr != NULL)
    {
        strncat(number, tokenPtr, sizeof number - 1);
    }
    tokenPtr = strtok(NULL, "() - ");
    if(tokenPtr != NULL)
    {
        strncat(number, tokenPtr, sizeof number - 1);
    }
    int valArea = atoi(area);
    printf("Area: %d\n", valArea);
    double valNumber = atof(number);
    printf("Number: %.0f\n", valNumber);
    return 0;
}


