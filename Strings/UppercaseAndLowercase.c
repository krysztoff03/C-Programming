
/*
* Write a program that inputs a line of text into char array. Output
* the line in uppercase letters and in lowercase letters.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{
    char s[100];
    char *sPtr;
    sPtr = s;
    printf("Enter a string: ");
    scanf("%s", s);
    printf("The string in uppercase letters is: ");
    while(*sPtr != '\0')
    {
        printf("%c", toupper(*sPtr));
        ++sPtr;
    }
    printf("\n");
    sPtr = s;
    printf("The string in lowercase letters is: ");
    while(*sPtr != '\0')
    {
        printf("%c", tolower(*sPtr));
        ++sPtr;
    }
    printf("\n");

    return 0;
}

