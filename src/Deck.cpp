#include <stdlib.h>
#include <time.h>
#include "Deck.h"

// Private
void Deck::compile(){
    for(int i=0; i<52; i++){
        Suit suit;

        if(i >= 0 && i < 13){
            suit = Suit::CLUB;
        }
        else if (i >= 13 && i < 26){
            suit = Suit::DIAMOND;
        }
        else if (i >= 26 && i < 39){
            suit = Suit::HEART;
        }
        else{
            suit = Suit::SPADE;
        }

        this->cards[i] = Card(static_cast<Rank>(i % 13 + 1), suit);
    }
}

// Public
Deck::Deck(){
    this->compile();
}

Deck::~Deck(){

}

void Deck::shuffle() {
    srand((unsigned int)time(NULL));

    for(int i = 0; i < 100; i++){
        int pos1 = rand() % 52;
        int pos2 = rand() % 52;
        Card swap = this->cards[pos1];
        this->cards[pos1] = this->cards[pos2];
        this->cards[pos2] = swap;
    }

    this->index = 0;
}

Card& Deck::deal(){
    return this->cards[this->index++];
}

void Deck::burn() {
    this->index++;
}
