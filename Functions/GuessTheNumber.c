
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
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");
    scanf("%d", &guess);
    while(number != guess)
    {
        if(number > guess)
        {
            printf("Too low. Try again!\n");
            scanf("%d", &guess);
        }
        if(number < guess)
        {
            printf("Too high. Try again!\n");
            scanf("%d", &guess);
        }
    }
    printf("Excellent. You guessed the number!\n");
    return 0;
}











