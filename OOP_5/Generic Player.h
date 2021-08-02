#ifndef OOP_5_GENERIC_PLAYER_H
#define OOP_5_GENERIC_PLAYER_H
#pragma once
#include "Hand.h"
#include <string>
#include <iostream>
using namespace std;
class GenericPlayer: public Hand{
    string name;
public:
    virtual bool IsHitting();
    bool IsBoosted();
    void Bust();
};




#endif //OOP_5_GENERIC_PLAYER_H
