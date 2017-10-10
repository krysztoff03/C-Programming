
/*
* Program that will determine if a department store customer
* has exceeded the credit limit on a charge account. For each
* customer, the following facts are available:
* a) Account number
* b) Balance at the beginning of the month
* c) Total of all items charged by this customer this month
* d) Total of all credits applied to this customer's account this month
* e) Allowed credit limit
* The program should input each fact, calculate the new balance
* (= beginning balance + charges – credits), and determine whether
* the new balance exceeds the customer's credit limit. For those
* customers whose credit limit is exceeded, the program should display
* the customer's account number, credit limit, new balance and the
* message “Credit limit exceeded.”
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;
    printf("enter account number (-1 to end): ");
    scanf("%d", &accountNumber);
    while(accountNumber != -1)
    {
        printf("enter beginning balance: ");
        scanf("%lf", &beginningBalance);
        printf("enter total charges: ");
        scanf("%lf", &totalCharges);
        printf("enter total credits: ");
        scanf("%lf", &totalCredits);
        printf("enter credit limit: ");
        scanf("%lf", &creditLimit);
        newBalance = beginningBalance + totalCharges - totalCredits;
        if(newBalance > creditLimit)
        {
            printf("account:     %d\n", accountNumber);
            printf("credit limit:%.2f\n", creditLimit);
            printf("balance:     %.2f\n", newBalance);
            printf("credit limit exceeded.\n");
        }
        printf("\nenter account number (-1 to end): ");
        scanf("%d", &accountNumber);
    }


    return 0;
}
