
/*
* Program which use bit fields.
*/

#include <stdio.h>
#include <stdlib.h>

#define CARDS 52

struct bitCard{
    unsigned int face : 4;
    unsigned int suit : 2;
    unsigned int color : 1;
};

typedef struct bitCard Card;

void fillDeck(Card * const wDeck);
void deal(const Card * const wDeck);

int main()
{
    Card deck[52];
    fillDeck(deck);
    deal(deck);
    return 0;
}

void fillDeck(Card * const wDeck)
{
    size_t i;
    for(i = 0; i < CARDS;++i)
    {
        wDeck[i].face = i % (CARDS / 4);
        wDeck[i].suit = i % (CARDS / 4);
        wDeck[i].color = i % (CARDS / 2);
    }
}

void deal(const Card * const wDeck)
{
    size_t k1, k2;
    for(k1 = 0, k2 = k1 + 26;k1 < CARDS / 2;++k1, ++k2)
    {
        printf("Card:%3d  Suit:%3d  Color:%2d  ",
               wDeck[k1].face, wDeck[k1].suit, wDeck[k1].color);
        printf("Card:%3d  Suit:%3d  Color:%2d\n",
               wDeck[k2].face, wDeck[k2].suit, wDeck[k2].color);
    }
}







