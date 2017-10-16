
/*
* Use a single-subscripted array to solve the following problem.
* A company pays its salespeople on a commission basis. The
* salespeople receive $200 per week plus 9% of their gross sales
* for that week. For example, a salesperson who grosses $3,000 in
* sales in a week receives $200 plus 9% of $3,000, or a total of $470.
*/

#include <stdio.h>
#include <stdlib.h>





int main()
{
    int counters[11] = {0};
    int i;
    double salaries[10] = {470.0, 510.0, 250.0, 300.0, 810.0, 950.0, 640.0, 590.0, 660.0, 710.0};
    for(i = 2;i < 11;i++)
    {
        if(salaries[i] > 200 && salaries[i] < 299)
            ++counters[2];
        if(salaries[i] > 300 && salaries[i] < 399)
            ++counters[3];
        if(salaries[i] > 400 && salaries[i] < 499)
            ++counters[4];
        if(salaries[i] > 500 && salaries[i] < 599)
            ++counters[5];
        if(salaries[i] > 600 && salaries[i] < 699)
            ++counters[6];
        if(salaries[i] > 700 && salaries[i] < 799)
            ++counters[7];
        if(salaries[i] > 800 && salaries[i] < 899)
            ++counters[8];
        if(salaries[i] > 900 && salaries[i] < 999)
            ++counters[9];
        if(salaries[i] > 1000)
            ++counters[10];
    }
    printf("The employees in salary range are:\n");
    for(i = 2;i < 10;i++)
    {
        printf("$%d00 - $%d99: %d\n", i, i, counters[i]);
    }
    printf("$1000 : %d\n", counters[10]);

    return 0;
}









