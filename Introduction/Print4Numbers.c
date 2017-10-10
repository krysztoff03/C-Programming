
/*
* Program that prints the numbers 1 to 4 on the same
* line. Write the program using the following methods.
* a) Using one printf statement with no conversion specifiers.
* b) Using one printf statement with four conversion specifiers.
* c) Using four printf statements.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("1 " "2 " "3 " "4\n");

    printf("%d %d %d %d\n", 1, 2, 3, 4);

    printf("%d ", 1);
    printf("%d ", 2);
    printf("%d ", 3);
    printf("%d\n", 4);
    return 0;
}
