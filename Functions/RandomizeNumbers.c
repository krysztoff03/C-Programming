
/*
* Randomize numbers from sets:
* a) 2, 4, 6, 8, 10
* b) 3, 5, 7, 9, 11
* c) 6, 10, 14, 18, 22
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randSet1();
int randSet2();
int randSet3();

int main()
{
    srand(time(NULL));
    printf("Set 1: %d\n", randSet1());
    printf("Set 2: %d\n", randSet2());
    printf("Set 3: %d\n", randSet3());
    return 0;
}
int randSet1()
{
    int x;
    x = (1 + rand() % 5) * 2;
    return x;
}
int randSet2()
{
    int x;
    x = ((1 + rand() % 5) * 2) + 1;
    return x;
}
int randSet3()
{
    int x;
    x = (((1 + rand() % 5) * 2) + 1) * 2;
    return x;
}

