
/*
* Collecting money becomes increasingly difficult during periods of
* recession, so companies may tighten their credit limits to prevent
* their accounts receivable (money owed to them) from becoming too
* large. In response to a prolonged recession, one company has cut
* its customers’ credit limits in half. Thus, if a particular customer
* had a credit limit of $2000, it’s now $1000. If a customer had a
* credit limit of $5000, it’s now $2500. Program that analyzes the
* credit status of three customers of this company.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int accountNumber;
    double initialBalance, totalCharges, totalCredits, creditLimit, newBalance;
    printf("enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    while(accountNumber != -1)
    {
        printf("enter beginning balance: ");
        scanf("%lf", &initialBalance);
        printf("enter total charges: ");
        scanf("%lf", &totalCharges);
        printf("enter total credits: ");
        scanf("%lf", &totalCredits);
        printf("enter credit limit: ");
        scanf("%d", &creditLimit);
        newBalance = initialBalance + totalCharges - totalCredits;
        if(newBalance > creditLimit)
        {
            printf("account: %d\ncredit limit:%.2f\nbalance:%.2f\ncredit limit exceeded!\n", accountNumber, creditLimit, newBalance);
        }
        else
        {
            printf("\n");
            continue;
        }
        printf("enter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }
    return 0;
}
