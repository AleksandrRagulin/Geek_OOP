#ifndef BJ1_0_HAND_H
#define BJ1_0_HAND_H
#pragma once
#include "Card.h"
class Hand
{
public:
    Hand();
    virtual ~Hand();
    void Add(Card* pCard);
    void Clear();
    int GetTotal() const;

protected:
    vector<Card*> m_Cards;
};


#endif //BJ1_0_HAND_H
