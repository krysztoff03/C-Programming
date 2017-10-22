
/*
* Accesing structure's members example.
*/

#include <stdio.h>
#include <stdlib.h>

struct customer{
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;
    struct{
        char phoneNumber[11];
        char address[50];
        char city[50];
        char state[3];
        char zipCode[6];
    }personal;
}customerRecord, *customerPtr;

customerPtr = &customerRecord;

int main()
{
    scanf("%s", customerRecord.lastName);
    scanf("%s", customerPtr->lastName);
    scanf("%s", customerRecord.firstName);
    scanf("%s", customerPtr->firstName);
    scanf("%u", customerRecord.customerNumber);
    scanf("%u", customerPtr->customerNumber);
    scanf("%s", customerRecord.personal.phoneNumber);
    scanf("%s", customerPtr->personal.phoneNumber);
    scanf("%s", customerRecord.personal.address);
    scanf("%s", customerPtr->personal.address);
    scanf("%s", customerRecord.personal.city);
    scanf("%s", customerPtr->personal.city);
    scanf("%s", customerRecord.personal.state);
    scanf("%s", customerPtr->personal.state);
    scanf("%s", customerRecord.personal.zipCode);
    scanf("%s", customerPtr->personal.zipCode);
    return 0;
}
