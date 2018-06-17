/*
 ============================================================================
 Name        : Pointers.c
 Author      : Cristian Iosif
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void foo1(int xval);
void foo2(int dummy);

void swap_nums(int *x, int *y);
void swap_pointers(char *x, char *y);

//Ex 2
/*
void foo1(int xval)
{
	int x;
	x = xval;
	printf("The address of x is 0x%x and the value is %d\n", &x, x);
}

void foo2(int dummy)
{
	int y;
	printf("The address of y is 0x%x and the value is %d\n", &y, y);
}
*/

//Ex 4
/*
void swap_nums(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void swap_pointers(char *x, char *y)
{
	char tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
*/

int main(void) {

	//Ex 1
	/*
	char c = 'a';
	int i = 10;
	double d = 6.223344;

	char *cPtr = &c;
	int *iPtr = &i;
	double *dPtr = &d;

	printf("The address of char    c is 0x%x\n", &c);
	printf("The address of int     i is 0x%x\n", &i);
	printf("The address of double  d is 0x%x\n", &d);
	printf("The address of char*   c is 0x%x\n", cPtr);
	printf("The address of int*    i is 0x%x\n", iPtr);
	printf("The address of double* d is 0x%x\n", dPtr);
	printf("\n");
	printf("The value of char      c is %c\n", c);
	printf("The value of int       i is %d\n", i);
	printf("The value of double    d is %f\n", d);
	printf("The value of char*     c is 0x%x\n", *cPtr);
	printf("The value of int*      i is 0x%x\n", *iPtr);
	printf("The value of double    d is 0x%x\n", *dPtr);
	printf("\n");
	printf("The size of char    is %d bytes\n", sizeof(char));
	printf("The size of int     is %d bytes\n", sizeof(int));
	printf("The size of double  is %d bytes\n", sizeof(double));
	printf("The size of char*   is %d bytes\n", sizeof(*cPtr));
	printf("The size of int*    is %d bytes\n", sizeof(*iPtr));
	printf("The size of double* is %d bytes\n", sizeof(*dPtr));
	*/

	//Ex 2
	/*
	foo1(7);
	foo2(11);
	*/
	/*
	 * Both x and y have the same address location in memory, but in different periods of time.
	 * After foo1(7) is executed, the memory location used is freed and foo2(11) is executed.
	 * 7 is passed to foo1 and executed. After that, 11 is passed to foo2 and executed. But,
	 * foo2 doesn't initialize y with dummy which is 11. And at that memory location, the value
	 * remains 7 because x was initialized with that value.
	 */

	//Ex 3
	/*
	printf("Pointer arithmetic + 1\n");
	char c = 'Z';
	char *cp = &c;
	printf("cp is 0x%08x\n", cp);
	printf("The character at cp is %c\n", *cp);
	// Pointer arithmetic - see what cp+1 is
	cp = cp + 1;
	printf("cp is 0x%08x\n", cp);
	printf("\n");
	int i = 5;
	int *ip = &i;
	printf("ip is 0x%08x\n", ip);
	printf("The integer at ip is %d\n", *ip);
	ip = ip + 1;
	printf("ip is 0x%08x\n", ip);
	printf("\n");
	double d = 6.223344;
	double *dp = &d;
	printf("dp is 0x%08x\n", dp);
	printf("The double at dp is %f\n", *dp);
	dp = dp + 1;
	printf("dp is 0x%08x\n", dp);
	printf("\n");
	printf("Pointer arithmetic + 2\n");
	char c2 = 'Z';
	char *cp2 = &c2;
	printf("cp2 is 0x%08x\n", cp2);
	printf("The character at cp2 is %c\n", *cp2);
	cp2 = cp2 + 2;
	printf("cp2 is 0x%08x\n", cp2);
	printf("\n");
	int i2 = 5;
	int *ip2 = &i2;
	printf("ip2 is 0x%08x\n", ip2);
	printf("The integer at ip2 is %d\n", *ip2);
	ip2 = ip2 + 2;
	printf("ip2 is 0x%08x\n", ip2);
	printf("\n");
	double d2 = 6.223344;
	double *dp2 = &d2;
	printf("dp2 is 0x%08x\n", dp2);
	printf("The double at dp2 is %f\n", *dp2);
	dp2 = dp2 + 2;
	printf("dp2 is 0x%08x\n", dp2);
	*/

	//Ex 4
	/*
	int a, b;
	char *s1, *s2;

	a = 3;
	b = 4;

	swap_nums(&a, &b);
	printf("a is %d\n", a);
	printf("b is %d\n", b);

	s1 = "I should print second";
	s2 = "I should print first";
	swap_pointers(&s1, &s2);
	printf("s1 is %s\n", s1);
	printf("s2 is %s\n", s2);
	*/

	//Ex 5

	char **s;
	char foo[] = "Hello World";

	s = foo;
	printf("s is %s\n", s);

	//s[0] = foo;
	printf("s[0] is %c\n", s[0]);

	return EXIT_SUCCESS;
}
