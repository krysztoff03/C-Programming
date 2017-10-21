
/*
* Program that reads a series of strings and prints only
* those that end with the letters "ed".
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
        if(string[strlen(string) - 2] == 'e' && string[strlen(string) - 1] == 'd')
        {
            printf("%s\n", string);
        }
        else
        {
            printf("The string is not finished with %c%c\n", 'e', 'd');
        }
        printf("Enter a string: ");
        gets(string);
    }

    return 0;
}


