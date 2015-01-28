#ifndef DEALER_H
#define DEALER_H

#include <string>
#include "Deck.h"

class Dealer
{
private:
    Deck* deck;

public:
    Dealer();
    ~Dealer();
    void deal(Card** cards, const int player_count, const int card_count);
};

#endif
