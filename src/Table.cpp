#include "Table.h"
#include <iostream>

using namespace std;

Table::Table(int seats, int cards){
    this->MAX_SEATS = seats;
    this->MAX_CARDS = cards;
    this->dealer = new Dealer();
    this->players = new vector<Player*>();
    this->cards = new Card*[this->MAX_SEATS];

    for(int x=0;x<this->MAX_SEATS;x++){
        this->cards[x] = new Card[this->MAX_CARDS];
    }
}

Table::~Table(){ }

void Table::addPlayer(Player*& player){
    if((int)this->players->size() < this->MAX_SEATS)
    {
        this->players->push_back(player);
    }
}

void Table::removePlayer(Player*& player) {
    int pos = -1;
    for (unsigned int i = 0; i < this->players->size(); ++i)
    {
        // Do not kill the player
        // Just remove the player from the table
        if(player->getId() == this->players->at(i)->getId())
        {
            pos = i;
        }
    }
    if(pos > 0){
        this->players->erase(this->players->begin() + pos);
    }
}

void Table::deal() {
    this->dealer->deal(this->cards, (int)this->players->size(), this->MAX_CARDS);

    for (unsigned int i=0;i<this->players->size();i++){
        this->players->at(i)->setCards(this->cards[i]);
    }
}

void Table::showPlayerHands() {
    for(unsigned int x=0;x<this->players->size();x++){
        Card*& cards = this->players->at(x)->show();
        std::cout << "Player " << to_string(this->players->at(x)->getId()) << endl;
        for(int c=0; c<this->MAX_CARDS;c++){
            cout << "Card " << to_string(c) << " "
                    << cards[c].rankToString(cards[c].getRank()) << " "
                    << cards[c].suitToString(cards[c].getSuit()) << endl;
        }
        cout << endl;
    }
}
