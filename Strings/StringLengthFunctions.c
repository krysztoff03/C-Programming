
/*
* Two versions of function strlen, the first version should use
* array subscripting, and the second should use pointers and
* pointer arithmetic.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int stringLength(char *s);
int stringLengthPointer(char *s1);

int main()
{
    char string[SIZE];
    int result, resultPointer;
    printf("Enter a string: ");
    gets(string);
    result = stringLength(string);
    printf("Result with array subscript: %d\n", result);
    resultPointer = stringLengthPointer(string);
    printf("Result with pointer arithmetic: %d\n", resultPointer);
    return 0;
}

int stringLength(char *s)
{
    int i;
    for(;s[i] != '\0';++i);
    return i;
}

int stringLengthPointer(char *s1)
{
    int i = 0;
    while(*s1 != '\0')
    {
        ++i;
        ++s1;
    }
    return i;
}

