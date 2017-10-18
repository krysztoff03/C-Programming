
/*
* Program that tests if two strings are equal (1 = true, 0 = false).
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

int areEqual(const char *s1, const char *s2);

int main()
{
    char string1[SIZE], string2[SIZE];
    printf("Enter two strings: ");
    scanf("%79s%79s", string1, string2);
    printf("The result is %d\n", areEqual(string1, string2));
    return 0;
}
int areEqual(const char *s1, const char *s2)
{
    int result = 1;
    for(;*s1 != '\0' && *s2 != '\0';++s1, ++s2)
    {
        if(*s1 != *s2)
        {
            return 0;
        }
    }
    return result;
}



