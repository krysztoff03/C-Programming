
/*
* Program that reads an integer and determines and prints whether
* it’s odd or even.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter an integer: ");
    scanf("%d", &a);
    if(a % 2 == 0)
        printf("the number is even.\n");
    if(a % 2 != 0)
        printf("the number is odd.\n");
    return 0;
}
