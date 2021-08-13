#ifndef BJ1_0_GENERICPLAYER_H
#define BJ1_0_GENERICPLAYER_H

#pragma once
#include "Hand.h"
#include <string>

class GenericPlayer : public Hand
{
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
public:
    GenericPlayer(const string& name = "");
    virtual ~GenericPlayer();
    virtual bool IsHitting() const = 0;
    bool IsBusted() const;
    void Bust() const;
protected:
    string m_Name;
};

#endif //BJ1_0_GENERICPLAYER_H
