
/*
* A company pays its employees as managers (who receive a fixed weekly
* salary), hourly workers (who receive a fixed hourly wage for up to
* the first 40 hours they work and “time-and-a-half”—i.e., 1.5 times
* their hourly wage—for overtime hours worked), commission workers
* (who receive $250 plus 5.7% of their gross weekly sales), or pieceworkers
* (who receive a fixed amount of money for each of the items they
* produce—each pieceworker in this company works on only one type of
* item). Write a program to compute the weekly pay for each employee.
* You do not know the number of employees in advance. Each type of
* employee has its own pay code: Managers have paycode 1, hourly
* workers have code 2, commission workers have code 3 and pieceworkers
* have code 4.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int employees, i, hours, itemsNumber;
    double salary, hourlyRate, total = 0, sales, item;
    printf("Enter paycodes:\n"
           "1 - Manager\n"
           "2 - Hourly worker\n"
           "3 - Commission worker\n"
           "4 - Pieceworker\n"
           "-1 to end:\n\n");
    scanf("%d", &employees);
    while(employees != -1)
    {
        switch(employees){
        case 1:
            printf("Enter manager's weekly salary: ");
            scanf("%lf", &salary);
            break;
        case 2:
            printf("Enter hourly rate: ");
            scanf("%lf", &hourlyRate);
            printf("Enter hours worked:\n");
            scanf("%d", &hours);
            if(hours <= 40)
            {
                salary = hours * hourlyRate;
            }
            else
            {
                salary = 40 * hourlyRate + (hours - 40) * hourlyRate * 1.5;
            }
            break;
        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);
            salary = 250 + sales * 0.057;
            break;
        case 4:
            printf("Enter the item's value: ");
            scanf("%lf", &item);
            printf("Enter the item's number produced: ");
            scanf("%d", &itemsNumber);
            salary = item * itemsNumber;
            break;
        default:
            printf("Invalid choice!"
                   "Enter a valid choice!\n");
            break;
        }
        printf("The total salary is %.2f\n\n", salary);
        printf("Enter paycodes:\n"
           "1 - Manager\n"
           "2 - Hourly worker\n"
           "3 - Commission worker\n"
           "4 - Pieceworker\n"
           "-1 to end:\n\n");
        scanf("%d", &employees);
    }

    return 0;
}
