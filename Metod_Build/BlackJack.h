#ifndef BJ1_0_BLACKJACK_H
#define BJ1_0_BLACKJACK_H
#pragma once
#include <string>
#include <vector>
#include "Deck.h"
#include "House.h"
#include "Player.h"
#include <time.h>

using namespace std;
class Game
{
public:
    Game(const vector<string>& names);
    ~Game()= default;
    void Play();

private:
    Deck m_Deck;
    House m_House;
    vector<Player> m_Players;
};

#endif //BJ1_0_BLACKJACK_H
