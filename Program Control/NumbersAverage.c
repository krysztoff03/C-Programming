
/*
* Program that calculates and prints the average of several integers.
* Assume the last value read with scanf is the sentinel 9999.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter = 0, sum = 0;
    double average;
    printf("enter numbers to average (9999 to end):\n");
    scanf("%d", &number);
    while(number != 9999)
    {
        sum += number;
        ++counter;
        scanf("%d", &number);
    }
    if(sum != 0)
    {
        average = sum / counter;
        printf("average is %.2f\n", average);
    }
    return 0;
}
