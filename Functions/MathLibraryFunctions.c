
/*
* Program which use math library functions.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void squareRoot(double a);
void cubeRoot(double a);
void exponent(double a);
void logarithmN(double a);
void logarithm10(double a);
void absValue(double a);
void roundsToSmallInt(double a);
void roundsToLargestInt(double a);
void power(double a, int b);
void remainderMod(double a, double c);
void sinus(double a);
void cosinus(double a);
void tangent(double a);

int main()
{
    int choice;
    double x, z;
    int y;
    printf("Enter your choice for the following functions:\n"
           "1 - Square root\n"
           "2 - Cube root\n"
           "3 - Exponential\n"
           "4 - Natural logarithm\n"
           "5 - Base 10 logarithm\n"
           "6 - Absolute value\n"
           "7 - Round to smallest int not less than the value\n"
           "8 - Round to largest int not greater than the value\n"
           "9 - Power\n"
           "10 - Remainder of values as a floating-point\n"
           "11 - Sinus\n"
           "12 - Cosinus\n"
           "13 - Tangent\n"
           "-1 to end\n");
    scanf("%d", &choice);
    while(choice != -1)
    {
        switch(choice)
        {
        case 1:
            printf("Enter x: ");
            scanf("%lf", &x);
            squareRoot(x);
            break;
        case 2:
            printf("Enter x: ");
            scanf("%lf", &x);
            cubeRoot(x);
            break;
        case 3:
            printf("Enter x: ");
            scanf("%lf", &x);
            exponent(x);
            break;
        case 4:
            printf("Enter x: ");
            scanf("%lf", &x);
            logarithmN(x);
            break;
        case 5:
            printf("Enter x: ");
            scanf("%lf", &x);
            logarithm10(x);
            break;
        case 6:
            printf("Enter x: ");
            scanf("%lf", &x);
            absValue(x);
            break;
        case 7:
            printf("Enter x: ");
            scanf("%lf", &x);
            roundsToSmallInt(x);
            break;
        case 8:
            printf("Enter x: ");
            scanf("%lf", &x);
            roundsToLargestInt(x);
            break;
        case 9:
            printf("Enter x and y: ");
            scanf("%lf%d", &x, &y);
            power(x, y);
            break;
        case 10:
            printf("Enter x and z: ");
            scanf("%lf%lf", &x, &z);
            remainderMod(x, z);
            break;
        case 11:
            printf("Enter x: ");
            scanf("%lf", &x);
            sinus(x);
            break;
        case 12:
            printf("Enter x: ");
            scanf("%lf", &x);
            cosinus(x);
            break;
        case 13:
            printf("Enter x: ");
            scanf("%lf", &x);
            tangent(x);
            break;
        default:
            printf("Invalid choice!\n"
                   "Enter a valid one!\n");
            break;
        }
        printf("\nEnter your choice for the following functions:\n"
           "1 - Square root\n"
           "2 - Cube root\n"
           "3 - Exponential\n"
           "4 - Natural logarithm\n"
           "5 - Base 10 logarithm\n"
           "6 - Absolute value\n"
           "7 - Round to smallest int not less than the value\n"
           "8 - Round to largest int not greater than the value\n"
           "9 - Power\n"
           "10 - Remainder of values as a floating-point\n"
           "11 - Sinus\n"
           "12 - Cosinus\n"
           "13 - Tangent\n"
           "-1 to end\n");
    scanf("%d", &choice);
    }
    return 0;
}

void squareRoot(double a)
{
    printf("sqrt(%.1f) = %.1f\n", a, sqrt(a));
}
void cubeRoot(double a)
{
    printf("cbrt(%.1f) = %.1f\n", a, cbrt(a));
}
void exponent(double a)
{
    printf("exp(%.1f) = %f\n", a, exp(a));
}
void logarithmN(double a)
{
    printf("log(%.1f) = %.1f\n", a, log(a));
}
void logarithm10(double a)
{
    printf("log10(%.1f) = %.1f\n", a, log10(a));
}
void absValue(double a)
{
    printf("fabs(%.1f) = %.1f\n", a, fabs(a));
}
void roundsToSmallInt(double a)
{
    printf("ceil(%.1f) = %.1f\n", a, ceil(a));
}
void roundsToLargestInt(double a)
{
    printf("floor(%.1f) = %.1f\n", a, floor(a));
}
void power(double a, int b)
{
    printf("pow(%1.f,%d) = %.1f\n", a, b, pow(a, b));
}
void remainderMod(double a, double c)
{
    printf("fmod(%.3f, %.3f) = %.3f\n", a, c, fmod(a, c));
}
void sinus(double a)
{
    printf("sin(%.1f) = %.1f\n", a, sin(a));
}
void cosinus(double a)
{
    printf("cos(%.1f) = %.1f\n", a, cos(a));
}
void tangent(double a)
{
    printf("tan(%.1f) = %.1f\n", a, tan(a));
}
