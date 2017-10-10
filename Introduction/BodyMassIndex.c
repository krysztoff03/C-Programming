
/*
* BMI calculator that read's the user weight in kilograms
* and height in meters. Calculate and display the user's body mass.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double bodyMassIndex;
    double weightInKilograms, heightInMeters;
    printf("enter weight in kilograms: ");
    scanf("%lf", &weightInKilograms);
    printf("enter height in meters: ");
    scanf("%lf", &heightInMeters);
    bodyMassIndex = weightInKilograms / (heightInMeters * heightInMeters);
    printf("BMI is %.2lf\n", bodyMassIndex);
    printf("BMI VALUES\n"
           "Underweight: less than 18.5\n"
           "Normal:      between 18.5 and 24.9\n"
           "Overweight:  between 25 and 29.9\n"
           "Obese:       30 or greater\n");
    return 0;
}
