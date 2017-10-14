
/*
* Program with a function that displays a solid square of asterisks
* whose side is specified in integer parameter side.
*/

#include <stdio.h>
#include <stdlib.h>

void squareOfAsterisks(int s);

int main()
{
    int side;
    printf("Enter number of elements on side: ");
    scanf("%d", &side);
    squareOfAsterisks(side);
    return 0;
}
void squareOfAsterisks(int s)
{
    int i, j;
    for(i = 1;i <= s;i++)
    {
        for(j = 1;j <= s;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



