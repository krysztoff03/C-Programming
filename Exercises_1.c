/*
 ============================================================================
 Name        : Tema1.c
 Author      : Cristian Iosif
 Version     : v1.0
 Copyright   :
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int searchArray(int a[], int num, int val);
bool checkForPowerOf2(int n);
int roundToPowerOf2(int nr);

int searchArray(int a[], int num, int val)
{
	int index, flag = 0;
	for(int i = 0;i < num;i++)
	{
		if(a[i] == val)
		{
			flag = 1;
			index = i;
		}
	}
	if(flag == 0)
	{
		return 255;
	}
	else
	{
		return index;
	}
}

bool checkForPowerOf2(int n)
{
	if((n & (n - 1)) == 0)
		return true;
	else
		return false;
}

int roundToPowerOf2(int nr)
{
	int result;
	result = pow(2, ceil(log(nr) / log(2)));
	return result;
}

int main(void) {
	/*
	printf("EX 18\n");
	printf("=====\n");
	int k = 5;
	printf("The initial value of k is %d\n", k);
	int *kPtr;
	kPtr = &k;
	*kPtr = 8;
	printf("The value of k after swapping with a pointer is %d\n", k);

	printf("\n");*/

	/*
	printf("EX 19\n");
	int number;
	printf("Enter the number of elements in the array: ");
	fflush(stdout);
	scanf("%d", &number);
	int arr[number];
	int i, value, returnValue;
	for(i = 0;i < number;i++)
	{
		printf("arr[%d] = ", i);
		fflush(stdout);
		scanf("%d", &arr[i]);
	}
	printf("Enter value to be searched: ");
	fflush(stdout);
	scanf("%d", &value);
	returnValue = searchArray(arr, number, value);
	printf("i = %d\n", returnValue);

	printf("\n");*/

	/*
	printf("EX 20\n");

	int n, res;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &n);
	res = roundToPowerOf2(n);
	printf("%d rounded to the next power of 2 is %d\n", n, res);

	printf("\n");*/

	/*
	printf("EX 21\n");

	int number;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%d", &number);
	if(checkForPowerOf2(number))
	{
		printf("%d is a power of 2.\n", number);
	}
	else
	{
		printf("%d is not a power of 2.\n", number);
	}

	printf("\n");*/

	printf("EX 22\n");

	int i;
	for(i = 1;i <= 100;i++)
    {
        if((i % 3 == 0) && (i % 5 == 0))
        {
	        printf("FizzBuzz\n");
        }
        else if(i % 5 == 0)
	    {
            printf("Buzz\n");
	    }
	    else if(i % 3 == 0)
        {
	    	printf("Fizz\n");
	    }
	    else
        {
	    	printf("%d\n", i);
	    }
	    }

	return EXIT_SUCCESS;
}
