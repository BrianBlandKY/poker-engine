#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"

class Player
{
private:
    int id;
    Card* cards;

public:
    Player(int id);
    ~Player();
    int getId();
    void muck();
    void fold();
    Card*& show();
    void setCards(Card*&);
};

#endif
