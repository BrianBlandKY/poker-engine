#ifndef CARD_H
#define CARD_H

#include <string>

enum class Suit { SPADE, HEART, DIAMOND, CLUB };
enum class Rank { ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

class Card
{
private:
    Rank rank;
    Suit suit;

public:
    Card();
    Card(Rank, Suit);
    ~Card();
    Rank getRank();
    Suit getSuit();
    static std::string rankToString(Rank);
    static std::string suitToString(Suit);
};

#endif
