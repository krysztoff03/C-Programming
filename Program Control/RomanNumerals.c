
/*
* Program that prints a table of all the Roman numeral equivalents
* of the decimal numbers in the range 1 to 100.
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    for(i = 1;i <= 100;i++)
    {
        switch(i / 10)
        {
        case 1:
            printf("X");
            break;
        case 2:
            printf("XX");
            break;
        case 3:
            printf("XXX");
            break;
        case 4:
            printf("XL");
            break;
        case 5:
            printf("L");
            break;
        case 6:
            printf("LX");
            break;
        case 7:
            printf("LXX");
            break;
        case 8:
            printf("LXXX");
            break;
        case 9:
            printf("XC");
            break;
        }
        switch(i % 10)
        {
        case 1:
            printf("I\n");
            break;
        case 2:
            printf("II\n");
            break;
        case 3:
            printf("III\n");
            break;
        case 4:
            printf("IV\n");
            break;
        case 5:
            printf("V\n");
            break;
        case 6:
            printf("VI\n");
            break;
        case 7:
            printf("VII\n");
            break;
        case 8:
            printf("VIII\n");
            break;
        case 9:
            printf("IX\n");
            break;
        }
    }
    return 0;
}
