
/*
* Program that inputs an ASCII code and prints the corresponding
* character.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

int main()
{
    int c;
    printf("Enter an ASCII value: ");
    scanf("%d", &c);
    while(c)
    {
        printf("ASCII value of %d = %c\n", c, c);
        printf("Enter an ASCII value: ");
        scanf("%d", &c);
    }


    return 0;
}


