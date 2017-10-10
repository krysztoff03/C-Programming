
/*
* Program that reads in three integers and then determines
* and prints the largest and the smallest integers in the group.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int smallest, largest;
    printf("enter three integers: ");
    scanf("%d%d%d", &a, &b, &c);
    smallest = a;
    if(b < smallest)
        smallest = b;
    if(c < smallest)
        smallest = c;
    printf("smallest is %d\n", smallest);
    largest = a;
    if(b > largest)
        largest = b;
    if(c > largest)
        largest = c;
    printf("largest is %d\n", largest);
    return 0;
}
