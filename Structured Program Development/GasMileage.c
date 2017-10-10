
/*
* Program that will input the miles driven and gallons used for each
* tankful. The program should calculate and display the miles per gallon
* obtained for each tankful. After processing all input information, the
* program should calculate and print the combined miles per gallon
* obtained for all tankfuls.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gallons;
    int miles;
    printf("enter the gallons used (-1 to end): ");
    scanf("%lf", &gallons);
    while(gallons != -1)
    {
        printf("enter the miles driven: ");
        scanf("%d", &miles);
        printf("the miles/gallon for this tank was %f\n", miles/gallons);
        printf("\nenter the gallons used (-1 to end): ");
        scanf("%lf", &gallons);
    }
    return 0;
}
