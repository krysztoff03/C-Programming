
/*
* Program that inputs several lines of text and a search character
* and uses function strchr to determine the total occurrences of the
* character in the lines of text.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main()
{
    char string[SIZE];
    char searchCharacter;
    char *searchPtr;
    int i = 0;
    printf("Enter a string: ");
    gets(string);
    printf("Enter a character to search: ");
    scanf("%c", &searchCharacter);
    searchPtr = strchr(string, searchCharacter);
    while(searchPtr != NULL)
    {
        ++i;
        searchPtr = strchr(searchPtr + 1, searchCharacter);
    }
    printf("%c appears in the string %d times!\n", searchCharacter, i);
    return 0;
}


