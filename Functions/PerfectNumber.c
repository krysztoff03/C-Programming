
/*
* An integer number is said to be a perfect number if its factors,
* including 1 (but not the number itself), sum to the number.
*/

#include <stdio.h>
#include <stdlib.h>

void perfect(int n);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    perfect(number);
    return 0;
}
 void perfect(int n)
 {
     int i, sum = 0, rem;
     for(i = 1;i < (n - 1);i++)
     {
         rem = n % i;
         if(rem == 0)
         {
             sum += i;
         }
     }
     if(sum == n)
     {
         printf("%d is perfect number.\n", n);
     }
     else
     {
         printf("%d is not a perfect number.\n", n);
     }
 }








