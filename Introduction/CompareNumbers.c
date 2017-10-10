
/*
* Write a program that asks the user to enter two integers, obtains the
* numbers from the user, then prints the larger number followed by the words “is larger.” If the
* numbers are equal, print the message “These numbers are equal.” Use only the single-selection
* form of the if statement you learned in this chapter.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter 2 integers: ");
    scanf("%d%d", &a, &b);
    if(a > b)
        printf("%d is larger.\n", a);
    if(a == b)
        printf("these numbers are equal.\n");
    if(a < b)
        printf("%d is larger.\n", b);
    return 0;
}
