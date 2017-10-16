
/*
* Program that prints array elements in reverse order recursively.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int func(const int b[], size_t startSubscript, size_t size);

int main()
{
    int a[SIZE] = {8, 3, 1, 2, 6, 0, 9, 7, 4, 5};
    printf("Answer is: ");
    func(a, 0, SIZE);
    printf("");
    return 0;
}
int func(const int b[], size_t startSubscript, size_t size)
{
    if(startSubscript < size)
    {
        func(b, startSubscript + 1, size);
        printf("%d ", b[startSubscript]);
    }
}








