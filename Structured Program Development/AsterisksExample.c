
/*
* Program that prints 100 asterisks, one at a time. After
* every tenth asterisk, your program should print a newline character.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    while(i <= 100)
    {
        printf("* ");
        if(i % 10 == 0)
            printf("\n");
        i++;
    }
    return 0;
}
