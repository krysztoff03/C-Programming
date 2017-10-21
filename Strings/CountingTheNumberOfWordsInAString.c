
/*
* Program that inputs a text and uses strtok to count the total
* number of words.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main()
{
    char string[SIZE];
    char *tokenPtr;
    int i = 0;
    printf("Enter a string: ");
    gets(string);
    tokenPtr = strtok(string, " ");
    while(tokenPtr != NULL)
    {
        ++i;
        tokenPtr = strtok(NULL, " ");
    }
    printf("The total number of words of the string is %d\n", i);
    return 0;
}


