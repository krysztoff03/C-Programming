
/*
* Program that calculate Fibonacci series non-recursively.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long int fibonacci(int n);

int main()
{
    int number;
    printf("Enter the limit of Fibonacci series: ");
    scanf("%d", &number);
    printf("\nThe %dth Fibonacci number is %llu\n", number, fibonacci(number));
    return 0;
}
unsigned long long int fibonacci(int n)
{
   int oldNumber = 0, currentNumber = 1, sum, i = 1;
   while(i <= n)
   {
       sum = oldNumber + currentNumber;
       oldNumber = currentNumber;
       currentNumber = sum;
       i++;
       printf("\n%d", sum);
   }
   return sum;
}









