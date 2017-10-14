
/*
* A parking garage charges a $2.00 minimum fee to park for up to
* three hours and an additional $0.50 per hour for each hour or part
* thereof over three hours. The maximum charge for any given 24-hour
* period is $10.00. Assume that no car parks for longer than 24 hours
* at a time.
*/

#include <stdio.h>
#include <stdlib.h>

double calculateCharges(double h);

int main()
{
    int i;
    double hours1, hours2, hours3, totalHours;
    double charges1, charges2, charges3, totalCharges;
    printf("Enter hours for car 1: ");
    scanf("%lf", &hours1);
    printf("Enter hours for car 2: ");
    scanf("%lf", &hours2);
    printf("Enter hours for car 3: ");
    scanf("%lf", &hours3);
    charges1 = calculateCharges(hours1);
    charges2 = calculateCharges(hours2);
    charges3 = calculateCharges(hours3);
    totalHours = hours1 + hours2 + hours3;
    totalCharges = charges1 + charges2 + charges3;
    printf("\nCar\tHours\tCharge\n");
    printf("1\t%.1f\t%.2f\n", hours1, charges1);
    printf("2\t%.1f\t%.2f\n", hours2, charges2);
    printf("3\t%.1f\t%.2f\n", hours3, charges3);
    printf("Total\t%.1f\t%.2f\n", totalHours, totalCharges);
    return 0;
}

double calculateCharges(double h)
{
    if(h == 24.0)
        return 10.00;
    else if(h <= 3)
        return 2.00;
    else
        return 2.00 + (h - 3) * 0.5;
}
