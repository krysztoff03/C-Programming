
/*
* The process of finding the largest number (i.e., the maximum
* of a group of numbers) is used frequently in computer applications.
* For example, a program that determines the winner of a sales contest
* would input the number of units sold by each salesperson. The salesperson
* who sells the most units wins the contest. Write a pseudocode program and
* then a program that inputs a series of 10 non-negative numbers and
* determines and prints the largest of the numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter = 1, number, largest;
    largest = number;
    printf("enter the number of units sold:\n");
    while(counter <= 10)
    {
        printf("%d: ", counter);
        scanf("%d", &number);
        if(number > largest)
        {
            largest = number;
        }
        ++counter;
    }
    printf("the largest number of units sold is %d\n", largest);

    return 0;
}
