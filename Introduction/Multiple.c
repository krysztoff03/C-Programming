
/*
* Program that reads in two integers and determines and prints
* whether the first is a multiple of the second.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("enter two integers: ");
    scanf("%d%d", &a, &b);
    if(a % b == 0)
        printf("%d is a multiple of %d\n", a, b);
    if(a % b != 0)
        printf("%d is not a multiple of %d\n", a, b);
    return 0;
}
