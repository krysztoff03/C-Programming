
/*
* Program that inputs four strings that represent floating-point
* values, converts the strings to double values, sums the values
* and prints the total of the four values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int main()
{
    char s1[SIZE], s2[SIZE], s3[SIZE], s4[SIZE];
    double n1, n2, n3, n4, sum = 0.0;
    printf("Enter four strings that represent floating-point values: ");
    scanf("%s%s%s%s", s1, s2, s3, s4);
    n1 = atof(s1);
    n2 = atof(s2);
    n3 = atof(s3);
    n4 = atof(s4);
    sum =  n1 + n2 + n3 + n4;
    printf("The sum of %.2f, %.2f, %.2f and %.2f is %.2f\n", n1, n2, n3, n4, sum);


    return 0;
}

