
/*
* Program that uses function strcmp to compare two strings input
* by the user. The program should state whether the first string is 
* less than, equal to or greater than the second string.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main()
{
    char s1[SIZE], s2[SIZE];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);
    if(strcmp(s1, s2) == 0)
    {
        printf("The strings are equal!\n");
    }
    else if(strcmp(s1, s2) < 0)
    {
        printf("The first string is less than the second string!\n");
    }
    else
    {
        printf("The first string is greater than the second string!\n");
    }



    return 0;
}

