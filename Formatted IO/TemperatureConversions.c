
/*
* Program that prints the value 100.453627 rounded to the nearest
* digit, tenth, hundredth, thousandth and ten-thousandth.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    double celsius;
    printf("\tCelsius\t  Fahrenheit\n");
    for(fahrenheit = 0;fahrenheit <= 212;fahrenheit++)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        printf("%10d\t%10.3f\n", fahrenheit, celsius);
    }
    return 0;
}


