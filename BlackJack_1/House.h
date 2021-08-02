//
// Created by Aleksandr on 02.08.2021.
//

#ifndef BLACKJACK_HOUSE_H
#define BLACKJACK_HOUSE_H
#pragma once
#include "GenericPlayer.h"
class House : public GenericPlayer
{
public:
    House(const string& name = "House");

    virtual ~House();

    // показывает, хочет ли дилер продолжать брать карты
    virtual bool IsHitting() const;

    // переворачивает первую карту
    void FlipFirstCard();
};


#endif //BLACKJACK_HOUSE_H
