#ifndef BJ1_0_DECK_H
#define BJ1_0_DECK_H
#pragma once
#include "Hand.h"
#include "GenericPlayer.h"
#include <algorithm>

class Deck : public Hand
{
public:
    Deck();

    virtual ~Deck();
    void Populate();
    void Shuffle();
    void Deal(Hand& aHand);
    void AdditionalCards(GenericPlayer& aGenericPlayer);
};

#endif //BJ1_0_DECK_H
