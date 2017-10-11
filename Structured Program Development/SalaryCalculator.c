
/*
* Program that will determine the gross pay for each of several
* employees. The company pays “straight time” for the first 40 hours
* worked by each employee and pays “time-and-a-half” for all hours
* worked in excess of 40 hours. You’re given a list of the employees
* of the company, the number of hours each employee worked last week
* and the hourly rate of each employee. Your program should input this
* information for each employee and should determine and display the
* employee's gross pay.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    double hourlyRate;
    printf("enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);
    while(hours != -1)
    {
        printf("enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);
        if(hours <= 40)
        {
            printf("salary is $%.2f\n", hours * hourlyRate);
        }
        else
        {
            printf("salary is $%.2f\n", (40 * hourlyRate) + (hours - 40) * 15);
        }
        printf("\nenter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }
    return 0;
}
