
/*
* Program that returns the smallest of three floating-point
* numbers.
*/

#include <stdio.h>
#include <stdlib.h>

double minimum(double a, double b, double c);

int main()
{
    double n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &n1, &n2, &n3);
    printf("The mininum number between %.1f, %.1f and %.1f is %.1f\n", n1, n2, n3, minimum(n1, n2, n3));
    return 0;
}

double minimum(double a, double b, double c)
{
    double min;
    min = a;
    if(b < min)
        min = b;
    if(c < min)
        min = c;
    return min;
}






