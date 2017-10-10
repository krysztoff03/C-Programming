
/*
* Program that inputs one five-digit number, separates
* the number into its individual digits and prints the
* digits separated from one another by three spaces each.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a, b, c, d, e;
    printf("enter a number: ");
    scanf("%d", &n);
    a = n / 10000;
    b = n % 10000 / 1000;
    c = n % 1000 / 100;
    d = n % 100 / 10;
    e = n % 10;
    printf("%d %d %d %d %d\n", a, b, c, d, e);
    return 0;
}
