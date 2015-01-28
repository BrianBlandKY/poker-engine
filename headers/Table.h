#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include "Card.h"
#include "Player.h"
#include "Dealer.h"

class Table
{
private:
    int MAX_SEATS;
    int MAX_CARDS;
    Dealer* dealer;
    Card** cards;
    std::vector<Player*>* players;

public:
    Table(int seats, int cards);
    ~Table();
    void addPlayer(Player*&);
    void removePlayer(Player*&);
    void deal();
    void showPlayerHands();
};

#endif
