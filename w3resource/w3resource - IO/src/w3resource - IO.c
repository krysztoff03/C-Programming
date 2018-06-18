/*
 ============================================================================
 Name        : w3resource.c
 Author      : Cristian Iosif
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {
	// 1.
	/*
	int celsius;
	double fahrenheit;
	printf("Input temperature (in Centigrade):");
	fflush(stdout);
	scanf("%d", &celsius);
	fahrenheit = celsius * 1.8 + 32;
	printf("%f degrees Fahrenheit.", fahrenheit);*/

	//2.
	/*
	double radius;
	double volume;
	printf("Input the radius of the sphere: ");
	fflush(stdout);
	scanf("%lf", &radius);
	volume = (4.0/3.0) * PI * (radius * radius * radius);
	printf("The volume of sphere is %f\n", volume);*/

	//3.
	/*
	double height, width;
	double perimeter;
	printf("Input the height of the Rectangle: ");
	fflush(stdout);
	scanf("%lf", &height);
	printf("Input the width of the Rectangle: ");
	fflush(stdout);
	scanf("%lf", &width);
	perimeter = (height * 2) + (width * 2);
	printf("Perimeter of the Rectangle is: %f\n", perimeter);*/

	//4.
	/*
	int km;
	double miles;
	printf("Input kilometers per hour: ");
	fflush(stdout);
	scanf("%d", &km);
	miles = km * 0.621371;
	printf("%f miles per hour.\n", miles);*/

	//5.
	/*
	int hours, minutes, total;
	printf("Input hours: ");
	fflush(stdout);
	scanf("%d", &hours);
	printf("Input minutes: ");
	fflush(stdout);
	scanf("%d", &minutes);
	total = (hours * 60) + minutes;
	printf("Total: %d minutes.\n", total);*/

	//6.
	/*
	int total, hours, minutes;
	printf("Input minutes: ");
	fflush(stdout);
	scanf("%d", &total);
	hours = total / 60;
	minutes = total - (hours * 60);
	printf("%d Hours, %d Minutes\n", hours, minutes);*/

	//7.
	/*
	char firstName[10], lastName[10];
	unsigned int year;
	printf("Input your firstname: ");
	fflush(stdout);
	scanf("%s", firstName);
	printf("Input your lastname: ");
	fflush(stdout);
	scanf("%s", lastName);
	printf("Input your year of birth: ");
	fflush(stdout);
	scanf("%d", &year);
	printf("%s %s %d\n", firstName, lastName, year);*/

	//8.
	/*
	int n1, n2, n3;
	int sum;
	printf("Input three numbers separated by comma: ");
	fflush(stdout);
	scanf("%d,%d,%d", &n1, &n2, &n3);
	sum = n1 + n2 + n3;
	printf("The sum of three numbers: %d\n", sum);*/

	//9.
	/*
	int n1, n2;
	printf("Enter any two numbers separated by comma: ");
	fflush(stdout);
	scanf("%d,%d", &n1, &n2);
	printf("The sum of the given integers: %d\n", n1 + n2);
	printf("The difference of the given integers: %d\n", n1 - n2);
	printf("The product of the given numbers: %d\n", n1 * n2);
	printf("The quotient of the given numbers: %lf\n", (double)(n1 / n2));*/

	//10.
	int a1, a2, a3;
	printf("Input two angles of a triangle separated by comma: ");
	fflush(stdout);
	scanf("%d,%d", &a1, &a2);
	a3 = 180 - (a1 + a2);
	printf("Third angle of the triangle: %d\n", a3);

	return EXIT_SUCCESS;
}
