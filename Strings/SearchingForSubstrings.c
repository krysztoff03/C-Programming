
/*
* Program that inputs a line of text and a search string from the
* keyboard. Using function strstr, locate the first occurrence of the
* search string in the line of text, and assign the location to
* variable searchPtr of type char *. If the search string is found,
* print the remainder of the line of text beginning with the search
* string. Then, use strstr again to locate the next occurrence of the
* search string in the line of text. If a second occurrence is found,
* print the remainder of the line of text beginning with the second
* occurrence.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main()
{
    char string1[SIZE], string2[SIZE];
    char *searchPtr;
    printf("Enter a string: ");
    gets(string1);
    printf("Enter a string to search: ");
    gets(string2);
    searchPtr = strstr(string1, string2);
    printf("The remainder of the string1 is: %s\n", searchPtr);
    searchPtr = strstr(searchPtr + 1, string2);
    printf("The second remainder of the string1 is: %s\n", searchPtr);
    return 0;
}


