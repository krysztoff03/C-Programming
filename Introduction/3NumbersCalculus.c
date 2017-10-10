
/*
* Program that inputs three different integers from
* the keyboard, then prints the sum, the average, the product,
* the smallest and the largest of these numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int sum, product;
    double average;
    int smallest, largest;
    printf("enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    printf("sum is %d\n", sum);
    average = sum / 3;
    printf("average is %.0f\n", average);
    product = a * b * c;
    printf("product is %d\n", product);
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
