
/*
* Program that sorts an array's elements into ascending order.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10


int main()
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass;
    size_t i;
    int temp;

    printf("Data items in original order:\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("%d  ", a[i]);
    }
    for(pass = 1;pass < SIZE;pass++)
    {
        for(i = 0;i < SIZE - 1;i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    printf("\nData items in ascending order:\n");
    for(i = 0;i < SIZE;i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return 0;
}










