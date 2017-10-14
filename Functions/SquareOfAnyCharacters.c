
/*
* Program with a function that displays a solid square of characters
* whose side is specified in integer parameter side.
*/

#include <stdio.h>
#include <stdlib.h>

void squareOfAnyCharacters(int s, char sym);

int main()
{
    int side;
    char symbol;
    printf("Enter number of elements on side: ");
    scanf("%d", &side);
    printf("Enter character to be printed: ");
    scanf(" %c", &symbol);
    squareOfAnyCharacters(side, symbol);
    return 0;
}
void squareOfAnyCharacters(int s, char sym)
{
    int i, j;
    for(i = 1;i <= s;i++)
    {
        for(j = 1;j <= s;j++)
        {
            printf("%c", sym);
        }
        printf("\n");
    }
}




