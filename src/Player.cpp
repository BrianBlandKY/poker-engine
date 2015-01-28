#include "Player.h"
#include <iostream>

Player::Player(int id){ this->id = id; }

Player::~Player(){ }

int Player::getId(){
    return this->id;
}

void Player::muck() { }

Card*& Player::show() {
    return this->cards;
}

void Player::fold() { }

void Player::setCards(Card*& cards){
    this->cards = cards;
}
