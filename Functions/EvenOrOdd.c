
/*
* Program that inputs a series of integers and passes them one at a
* time to function even, which uses the remainder operator to
* determine whether an integer is even.
*/

#include <stdio.h>
#include <stdlib.h>

int evenOrOdd(int n);

int main()
{
    int number;
    printf("Enter a number (-1 to end): ");
    scanf("%d", &number);
    while(number != -1)
    {
        if(evenOrOdd(number) == 1)
        {
            printf("%d is even!\n", number);
        }
        else
        {
            printf("%d is odd!\n", number);
        }
        printf("Enter a number (-1 to end): ");
        scanf("%d", &number);
    }
    return 0;
}
int evenOrOdd(int n)
{
    if(n % 2 == 0)
        return 1;
    else
        return 0;
}



