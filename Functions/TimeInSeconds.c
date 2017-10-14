
/*
* Program with a function that takes the time as three integer
* arguments (for hours, minutes, and seconds) and returns the number
* of seconds since the last time the clock “struck 12.” Use this
* function to calculate the amount of time in seconds between two
* times, both of which are within one 12-hour cycle of the clock.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculateTime(int h, int m, int s);

int main()
{
    int hours, minutes, seconds;
    int time1, time2;
    printf("Enter first hour, minutes and seconds: ");
    scanf("%d%d%d", &hours, &minutes, &seconds);
    time1 = calculateTime(hours, minutes, seconds);
    printf("Enter second hour, minutes and seconds: ");
    scanf("%d%d%d", &hours, &minutes, &seconds);
    time2 = calculateTime(hours, minutes, seconds);
    printf("Difference in seconds between time1 and time2 is %d\n", abs(time1 - time2));
    return 0;
}

int calculateTime(int h, int m, int s)
{
    return h * 12 * 3600 + m * 60 + s;
}




