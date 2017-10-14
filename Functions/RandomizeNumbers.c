
/*
* Randomize numbers from sets:
* a) 2, 4, 6, 8, 10
* b) 3, 5, 7, 9, 11
* c) 6, 10, 14, 18, 22
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{
    int a, b, c;
    srand(time(NULL));
    a = (1 + rand() % 5) * 2;
    b = ((1 + rand() % 5) * 2) + 1;
    c = ((1 + rand() % 5) + 1) * 2;
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}


