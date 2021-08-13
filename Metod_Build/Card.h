//
// Created by Aleksandr on 13.08.2021.
//

#ifndef BJ1_0_CARD_H
#define BJ1_0_CARD_H
#pragma once

#include <vector>
#include <iostream>
using namespace std;

enum rank {
    ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING
};
enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

class Card
{
public:
    enum rank {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING
    };
    enum suit { CLUBS, DIAMONDS, HEARTS, SPADES };

    Card(rank r = ACE, suit s = SPADES, bool ifu = true);
    int GetValue() const;
    void Flip();
    friend ostream& operator<<(ostream& os, const Card& aCard);
private:
    rank m_Rank;
    suit m_Suit;
    bool m_IsFaceUp;
};



#endif //BJ1_0_CARD_H
