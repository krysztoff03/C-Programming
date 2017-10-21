
/*
* Program that uses random number generation to create sentences.
* The program should use four arrays of pointers to char called article,
* noun, verb and preposition. The program should create a sentence by
* selecting a word at random from each array in the following order:
* article, noun, verb, preposition, article and noun. As each word is
* picked,it should be concatenated to the previous words in an array
* large enough to hold the entire sentence. The words should be separated
* by spaces. When the final sentence is output, it should start with a
* capital letter and end with a period. The program should generate 20
* such sentences. The arrays should be filled as follows: The article
* array should contain the articles "the", "a", "one", "some" and "any";
* the noun array should contain the nouns "boy", "girl", "dog", "town"
* and "car"; the verb array should contain the verbs "drove", "jumped",
* "ran", "walked" and "skipped"; the preposition array should contain
* the prepositions "to", "from", "over", "under" and "on".
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define SIZE 5
#define SENTENCESIZE 100

void sentenceGenerator(const char *const article[], const char *const noun[], const char *const verb[], const char *const preposition[]);

int main()
{
    const char *article[SIZE] = {"the", "a", "one", "some", "any"};
    const char *noun[SIZE] = {"boy", "girl", "dog", "town", "car"};
    const char *verb[SIZE] = {"drove", "jumped", "ran", "walked", "skipped"};
    const char *preposition[SIZE] = {"to", "from", "over", "under", "on"};
    srand(time(NULL));
    sentenceGenerator(article, noun, verb, preposition);
    return 0;
}

void sentenceGenerator(const char *const article[], const char *const noun[], const char *const verb[], const char *const preposition[])
{
    int i;
    char sentence[SENTENCESIZE];
    for(i = 1;i <= 20;i++)
    {
        sprintf(sentence, "%s %s %s %s %s %s.\n", article[rand() % SIZE], noun[rand() % SIZE], verb[rand() % SIZE],
                                       preposition[rand() % SIZE], article[rand() % SIZE], noun[rand() % SIZE]);
        sentence[0] = toupper(sentence[0]);
        puts(sentence);
    }
}
