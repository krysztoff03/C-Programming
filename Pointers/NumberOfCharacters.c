
/*
* Program that calculates the numbers of characters in a string.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

int calc(const char *s);

int main()
{
    char string[SIZE];
    printf("Enter a string: ");
    scanf("%79s", string);
    printf("%d\n", calc(string));
    return 0;
}
int calc(const char *s)
{
    int x;
    for(x = 0;*s != '\0';++s)
    {
        ++x;
    }
    return x;
}



