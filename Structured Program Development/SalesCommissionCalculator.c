
/*
* One large chemical company pays its salespeople on a commission
* basis. The salespeople receive $200 per week plus 9% of their gross
* sales for that week. For example, a salesperson who sells $5000 worth
* of chemicals in a week receives $200 plus 9% of $5000, or a total of
* $650. Develop a program that will input each salesperson’s gross sales
* for last week and will calculate and display that salesperson’s earnings.
* Process one salesperson's figures at a time.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sales, totalSalary;
    printf("enter sales in dollars (-1 to end): $");
    scanf("%lf", &sales);
    while(sales != -1)
    {
        totalSalary = 200 + 0.09 * sales;
        printf("salary is: $%.2f\n", totalSalary);
        printf("\nenter sales in dollars (-1 to end): $");
        scanf("%lf", &sales);
    }
    return 0;
}
