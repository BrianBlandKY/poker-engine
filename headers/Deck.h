#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck
{
private:
    const static int size = 52;
    int index;
    Card cards[size];
    void compile();

public:
    Deck();
    ~Deck();
    void shuffle();
    void burn();
    Card& deal();
};

#endif
