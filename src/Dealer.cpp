#include <iostream>
#include <deck.h>
#include "Card.h"
#include "Dealer.h"

Dealer::Dealer(){
    this->deck = new Deck();
}

Dealer::~Dealer(){
    delete this->deck;
}

void Dealer::deal(Card** cards, const int player_count, const int card_count) {
    this->deck->shuffle();
    for(int i=0;i<card_count;i++){
        for(int y=0;y<player_count;y++){
            cards[y][i] = this->deck->deal();
        }
    }
}
