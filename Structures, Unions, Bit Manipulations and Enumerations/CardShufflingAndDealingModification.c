
/*
* Shuffling the cards using a high-performance shuffle.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52

struct bitCard{
    unsigned int face : 4;
    unsigned int suit : 2;
    unsigned int color : 1;
};

typedef struct bitCard Card;

void fillDeck(Card * const wDeck);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main()
{
    Card deck[CARDS];
    srand(time(NULL));
    fillDeck(deck);
    shuffle(deck);
    deal(deck);
    return 0;
}

void fillDeck(Card * const wDeck)
{
    size_t i;
    for(i = 0;i < CARDS;++i)
    {
        wDeck[i].face = i % (CARDS / 4);
        wDeck[i].suit = i / (CARDS / 4);
        wDeck[i].color = i / (CARDS / 2);
    }
}

void shuffle(Card * const wDeck)
{
    size_t i, j;
    Card temp;
    for(i = 0;i < CARDS;++i)
    {
        j = rand() % CARDS;
        temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

void deal(const Card * const wDeck)
{
    size_t k1, k2;
    for(k1 = 0, k2 = k1 + 26;k1 < CARDS;++k1, ++k2)
    {
        printf("Card:%3d  Suit:%2d  Color:%2d  ",
               wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
        printf("Card:%3d  Suit:%2d  Color:%2d\n",
               wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
    }
}
