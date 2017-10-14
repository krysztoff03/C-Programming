
/*
* Program that calculates Celsius and Fahrenheit temperatures.
*/

#include <stdio.h>
#include <stdlib.h>

double celsius(double fahr);
double fahrenheit(double cels);

int main()
{
    int choice;
    double f, c;
    printf("Temperature conversion\n"
           "1 - Fahrenheit to Celsius\n"
           "2 - Celsius to Fahrenheit\n"
           "-1 to end.\n");
    scanf("%d", &choice);
    while(choice != -1)
    {
        switch(choice)
        {
        case 1:
            printf("Enter Fahrenheit temperature: ");
            scanf("%lf", &f);
            printf("%.2f (F) = %.2f (C)\n\n", f, celsius(f));
            break;
        case 2:
            printf("Enter Celsius temperature: ");
            scanf("%lf", &c);
            printf("%.2f (C) = %.2f (F)\n\n", c, fahrenheit(c));
            break;
        default:
            printf("Invalid choice!\n"
                   "Enter a valid one.\n");
            break;
        }
        printf("Temperature conversion\n"
           "1 - Fahrenheit to Celsius\n"
           "2 - Celsius to Fahrenheit\n"
           "-1 to end.\n");
        scanf("%d", &choice);
    }
    return 0;
}

double celsius(double fahr)
{
    return (fahr - 32) / 1.8;
}
double fahrenheit(double cels)
{
    return cels * 1.8 + 32;
}




