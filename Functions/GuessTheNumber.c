
/*
* Program that plays the game of “guess the number”.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number, guess;
    srand(time(NULL));
    number = 1 + rand() % 1000;
    printf("i have a number between 1 and 1000.\n");
    printf("can you guess my number?\n");
    printf("please type your first guess.\n");
    scanf("%d", &guess);
    while(number != guess)
    {
        if(number > guess)
        {
            printf("too low. try again!\n");
            scanf("%d", &guess);
        }
        if(number < guess)
        {
            printf("too high.try again!\n");
            scanf("%d", &guess);
        }
    }
    printf("excellent.you guessed the number!\n");
    return 0;
}











