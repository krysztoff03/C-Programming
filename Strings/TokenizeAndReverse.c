
/*
* Program that inputs a line of text, tokenizes the line with
* function strtok and outputs the tokens in reverse order.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100

void reverseWords(char *sPtr);

int main()
{
    char string[SIZE];
    printf("Enter the string: ");
    gets(string);
    reverseWords(string);
    return 0;
}

void reverseWords(char *sPtr)
{
    char *words[50], *temp;
    int counter = 0, i;
    temp = strtok(sPtr, " ");
    while(temp != NULL)
    {
        words[counter++] = temp;
        temp = strtok(NULL, " ");
    }
    printf("The words in reverse order are: ");
    for(i = counter - 1;i >= 0;i--)
    {
        printf("%s ", words[i]);
    }
}


