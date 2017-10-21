
/*
* Program that inputs four strings that represent integers,
* converts the strings to integers, sums the values and prints
* the total of the four values.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

int main()
{
    char s1[SIZE], s2[SIZE], s3[SIZE], s4[SIZE];
    int n1, n2, n3, n4, sum = 0;
    printf("Enter four strings that represent integers: ");
    scanf("%s%s%s%s", s1, s2, s3, s4);
    n1 = atoi(s1);
    n2 = atoi(s2);
    n3 = atoi(s3);
    n4 = atoi(s4);
    sum =  n1 + n2 + n3 + n4;
    printf("The sum of %d, %d, %d and %d is %d\n", n1, n2, n3, n4, sum);


    return 0;
}

