#include <iostream>
#include "Card.h"

// Public
Card::Card(){ }

Card::Card(Rank rank, Suit suit) {
    this->rank = rank;
    this->suit = suit;
}

Card::~Card(){ }

Rank Card::getRank() {
    return this->rank;
}

Suit Card::getSuit(){
    return this->suit;
}

std::string Card::suitToString(Suit suit) {
    switch(suit){
        case Suit::CLUB:
            return "Club";
        case Suit::DIAMOND:
            return "Diamond";
        case Suit::HEART:
            return "Heart";
        case Suit::SPADE:
            return "Spade";
    }
}

std::string Card::rankToString(Rank rank){
    switch(rank){
        case Rank::ONE:
            return "One";
        case Rank::TWO:
            return "Two";
        case Rank::THREE:
            return "Three";
        case Rank::FOUR:
            return "Four";
        case Rank::FIVE:
            return "Five";
        case Rank::SIX:
            return "Six";
        case Rank::SEVEN:
            return "Seven";
        case Rank::EIGHT:
            return "Eight";
        case Rank::NINE:
            return "Nine";
        case Rank::TEN:
            return "Ten";
        case Rank::JACK:
            return "Jack";
        case Rank::QUEEN:
            return "Queen";
        case Rank::KING:
            return "King";
        case Rank::ACE:
            return "Ace";
    }
}
