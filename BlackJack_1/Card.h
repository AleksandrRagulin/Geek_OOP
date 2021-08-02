#ifndef OOP_4_CARD_H
#define OOP_4_CARD_H

#include <iostream>
using namespace std;
class Card{
public:
    enum rank { A=1,_2,_3,_4,_5,_6,_7,_8,_9,_10,J,Q,K};
    enum Suit {Bubi,Chervi,Kresti, Piki};

private:
    Suit m_Suit;
    rank m_Rank;
    bool m_IsFaceUp;
public:
    Card(Suit sign, rank val, bool up): Sign(sign),m_Rank(val),m_IsFaceUp(up){}
    Card() = default;

    void Flip();
    int GetValue();
    friend ostream& operator<<(ostream& os, const Card& aCard);
};

ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
    const string SUITS[] = { "c", "d", "h", "s" };

    if (aCard.m_IsFaceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }

    return os;
}

#endif //OOP_4_CARD_H
