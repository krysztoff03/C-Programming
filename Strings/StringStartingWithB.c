
/*
* Program that reads a series of strings and prints only
* those beginning with the letter "b".
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main()
{
    char string[SIZE];
    printf("Enter a string: ");
    gets(string);
    while(string)
    {
        if(string[0] == 'b')
        {
            printf("%s\n", string);
        }
        else
        {
            printf("The string is not starting with \'%c\'\n", 'b');
        }
        printf("Enter a string: ");
        gets(string);
    }

    return 0;
}


