#ifndef BJ1_0_PLAYER_H
#define BJ1_0_PLAYER_H
#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const string& name = "");
    ~Player(){};
    virtual bool IsHitting() const;
    void Win() const;
    void Lose() const;
    void Push() const;
};

#endif //BJ1_0_PLAYER_H
