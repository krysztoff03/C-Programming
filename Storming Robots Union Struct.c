/*
 ============================================================================
 Name        : Storming Robots Union Struct.c
 Author      : Cristian Iosif
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Ex 1

typedef union
{
	int region;
	int group;
	int sn;
}ssn;

typedef unsigned char ubyte;

//Ex 2

int createColor(ubyte r, ubyte g, ubyte b);

int createColor(ubyte r, ubyte g, ubyte b)
{
	return (r << 16) | (g << 8) | b;
}

//Ex 3
/*
 * Prima varianta

void makeColor(unsigned int rgb);

void makeColor(unsigned int rgb)
{
	ubyte r, g, b;
	r = (rgb >> 16) & 0xFF;
	g = (rgb >> 8) & 0xFF;
	b = rgb & 0xFF;
	printf("R (in hex) = %x or %d\n", r, r);
	printf("G (in hex) = %x or %d\n", g, g);
	printf("B (in hex) = %x or %d\n", b, b);
}
*/

void makeColor(unsigned int rgb, ubyte *red, ubyte *green, ubyte *blue);

void makeColor(unsigned int rgb, ubyte *red, ubyte *green, ubyte *blue)
{
	*red = (rgb >> 16) & 0xFF;
	*green = (rgb >> 8) & 0xFF;
	*blue = rgb & 0xFF;
}


//Ex 4
typedef struct
{
	int red;
	int green;
	int blue;
}Color;

void makeColorEx4(unsigned int rgb, Color *C);

void makeColorEx4(unsigned int rgb, Color *C)
{
	C->red = (rgb >> 16) & 0xFF;
	C->green = (rgb >> 8) & 0xFF;
	C->blue = rgb & 0xFF;
	printf("R (in hex) = %x or %d\n", C->red, C->red);
	printf("G (in hex) = %x or %d\n", C->green, C->green);
	printf("B (in hex) = %x or %d\n", C->blue, C->blue);
}

int main(void) {

	//Ex 1
	/*
	ssn ssnUser;
	int tempSSNUserRegion, tempSSNUserGroup, tempSSNUserSN;
	printf("Input Display:\n");
	printf("Enter your SSN (###-##-####): ");
	fflush(stdout);
	scanf("%d", &ssnUser.region);
	tempSSNUserRegion = ssnUser.region;
	scanf("%d", &ssnUser.group);
	tempSSNUserGroup = ssnUser.group;
	scanf("%d", &ssnUser.sn);
	tempSSNUserSN = ssnUser.sn;
	printf("Output:\n");

	ssnUser.region = tempSSNUserRegion;
	printf("Region: %d\n", ssnUser.region);
	ssnUser.group = tempSSNUserGroup;
	printf("Group: %d\n", ssnUser.group);
	ssnUser.sn = tempSSNUserSN;
	printf("Serial Number: %d\n", ssnUser.sn);
	*/

	//Ex 2

	/* De discutat la urmatoarea sedinta. Daca red, green, blue sunt de tip ubyte,
	 * functia returneaza doar B (ff). Daca format specifier-ul pentru ubyte ar fi %c,
	 * nu mai pot introduce valori dupa R. Momentan doar cu red, green, blue de tip int
	 * functia returneaza corect */

	/*
	int red, green, blue;
	printf("Enter R: (0 <= x <= 255): ");
	fflush(stdout);
	scanf("%d", &red);
	printf("Enter G: (0 <= x <= 255): ");
	fflush(stdout);
	scanf("%d", &green);
	printf("Enter B: (0 <= x <= 255): ");
	fflush(stdout);
	scanf("%d", &blue);

	printf("Output Color: %x\n", createColor(red, green, blue));
	*/

	//Ex 3

	/*
	unsigned int rgbCode;
	ubyte r, g, b;
	printf("Enter the RGB Code: ");
	fflush(stdout);
	//The format for scanning an unsigned value in hexadecimal
	scanf("%x", &rgbCode);
	makeColor(rgbCode, &r, &g, &b);
	printf("R (in hex) = %x or %d\n", r, r);
	printf("G (in hex) = %x or %d\n", g, g);
	printf("B (in hex) = %x or %d\n", b, b);
	*/

	//Ex 4


	Color ColorTest;
	unsigned int rgbCode;
	printf("Enter the RGB Code: ");
	fflush(stdout);
	scanf("%x", &rgbCode);
	makeColorEx4(rgbCode, &ColorTest);


	return EXIT_SUCCESS;
}
