//
// Created by Aleksandr on 13.08.2021.
//

#ifndef BJ1_0_HOUSE_H
#define BJ1_0_HOUSE_H
#pragma once

#include "GenericPlayer.h"
class House : public GenericPlayer
{
public:
    House(const string& name = "House");
    ~House(){};
    virtual bool IsHitting() const;
    void FlipFirstCard();
};



#endif //BJ1_0_HOUSE_H
