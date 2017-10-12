
/*
* Calculating sales for one day for an online retailer.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int productNumber, quantity;
    double retailPrice, total1, total2, total3, total4, total5;
    for(productNumber = 1;productNumber <= 5;productNumber++)
    {
        switch(productNumber){
        case 1:
            retailPrice = 2.98;
            printf("enter quantity for product 1: ");
            scanf("%d", &quantity);
            total1 = retailPrice * quantity;
            break;
        case 2:
            retailPrice = 4.50;
            printf("enter quantity for product 2: ");
            scanf("%d", &quantity);
            total2 = retailPrice * quantity;
            break;
        case 3:
            retailPrice = 9.98;
            printf("enter quantity for product 3: ");
            scanf("%d", &quantity);
            total3 = retailPrice * quantity;
            break;
        case 4:
            retailPrice = 4.49;
            printf("enter quantity for product 4: ");
            scanf("%d", &quantity);
            total4 = retailPrice * quantity;
            break;
        case 5:
            retailPrice = 6.87;
            printf("enter quantity for product 5: ");
            scanf("%d", &quantity);
            total5 = retailPrice * quantity;
            break;
        default:
            printf("product number not found. enter a valid option!\n");
            break;
        }
    }
    printf("the total sales for one day is %.2f\n", total1 + total2 + total3 + total4 + total5);

    return 0;
}
