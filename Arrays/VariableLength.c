
/*
* Program that use variable length arrays.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

void print1DArray(int size, int arr[size]);
void print2DArray(int row, int col, int arr[row][col]);

int main()
{
    int arraySize;
    int row1, col1, row2, col2;
    int i, j;
    printf("Enter the size of a one dimensional array: ");
    scanf("%d", &arraySize);
    printf("Enter number of rows and columns in a two dimensional array: ");
    scanf("%d%d", &row1, &col1);
    printf("Enter number of rows and columns in another two dimensional array: ");
    scanf("%d%d", &row2, &col2);
    int array[arraySize];
    int array2D1[row1][col1];
    int array2D2[row2][col2];
    printf("\nsizeof(array) yields array size of %d bytes", sizeof(array));
    for(i = 0;i < arraySize;i++)
    {
        array[i] = i * i;
    }
    for(i = 0;i < row1;i++)
    {
        for(j = 0;j < col1;j++)
        {
            array2D1[i][j] = i + j;
        }
    }
    for(i = 0;i < row2;i++)
    {
        for(j = 0;j < col2;j++)
        {
            array2D2[i][j] = i + j;
        }
    }
    printf("\nOne dimensional array:\n");
    print1DArray(arraySize, array);
    printf("\n\n");
    printf("First two dimensional array:\n");
    print2DArray(row1, col1, array2D1);
    printf("\n\n");
    printf("Second two dimensional array:\n");
    print2DArray(row2, col2, array2D2);
    printf("\n");
    return 0;
}
void print1DArray(int size, int arr[size])
{
    int i;
    for(i = 0;i < size;i++)
    {
        printf("array[%d] = %d\n", i, arr[i]);
    }
}
void print2DArray(int row, int col, int arr[row][col])
{
    int i, j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}











