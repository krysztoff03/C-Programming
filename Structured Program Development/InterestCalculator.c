
/*
* Program that will input principal, rate and days for several loans,
* and will calculate and display the simple interest for each loan,
* using the preceding formula.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double loanPrincipal, interestRate, interestCharge;
    int days;
    printf("enter loan principal (-1 to end): ");
    scanf("%lf", &loanPrincipal);
    while(loanPrincipal != -1)
    {
        printf("enter interest rate: ");
        scanf("%lf", &interestRate);
        printf("enter term of the loan in days: ");
        scanf("%d", &days);
        interestCharge = (loanPrincipal * interestRate * days) / 365;
        printf("the interest charge is $%.2f\n", interestCharge);
        printf("\nenter loan principal (-1 to end): ");
        scanf("%lf", &loanPrincipal);
    }
    return 0;
}
