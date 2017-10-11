
/*
* Program that reads in the side of a square and then prints that
* square out of asterisks.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int row, col;
    printf("enter a size: ");
    scanf("%d", &n);
    for(row = 1;row <= n;row++)
    {
        for(col = 1;col <= n;col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
