
/*
* Program that concatenates two strings.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

void concat(char *s1, const char *s2);

int main()
{
    char string1[SIZE], string2[SIZE];
    printf("Enter two strings: ");
    scanf("%79s%79s", string1, string2);
    concat(string1, string2);
    printf("%s", string1);
    return 0;
}

void concat(char *s1, const char *s2)
{
    while(*s1 != '\0')
    {
        ++s1;
    }
    for(;*s1 = *s2;++s1, ++s2)
    {
        ;
    }
}



