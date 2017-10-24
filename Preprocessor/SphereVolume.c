
/*
* Program that defines a macro with one argument to compute the
* volume of a sphere. The program should compute the volume for
* spheres of radius 1 to 10 and print the results in tabular format.
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define SPHERE_VOLUME(x) ((4.0 / 3) * PI * (x) * (x) * (x))

int main()
{
    double r, vol;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);
    vol = SPHERE_VOLUME(r);
    printf("The volume of the sphere is %.2f\n", vol);
    return 0;
}
