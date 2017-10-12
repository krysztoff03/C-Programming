
/*
* The factorial function is used frequently in probability problems.
* The factorial of a positive integer n (written n! and pronounced
* “n factorial”) is equal to the product of the positive integers
* from 1 to n. Write a program that evaluates the factorials of the
* integers from 1 to 5. Print the results in tabular format.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int factorial = 1, number;
    printf("1!\t2!\t3!\t4!\t5!\n");
    for(number = 1;number <= 5;number++)
    {
        factorial *= number;
        printf("%d\t", factorial);
    }
    return 0;
}
