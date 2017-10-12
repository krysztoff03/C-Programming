
/*
* One interesting application of computers is drawing graphs and
* bar charts (sometimes called “histograms”). Write a program that
* reads five numbers (each between 1 and 30). For each number read,
* the program should print a line containing that number of adjacent
* asterisks.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, j, number;
    printf("enter numbers:\n");
    for(i = 1;i <= 5;++i)
    {
        scanf("%d", &number);
        for(j = 1;j <= number;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
