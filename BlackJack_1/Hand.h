#ifndef OOP_4_HAND_H
#define OOP_4_HAND_H
#include "Card.h"
#include <vector>
using namespace std;
class Hand{
protected:
    vector<Card*> m_Cards;
public:
    Hand() = default;
    void Add(Card* pCard);
    void Clear();
    int GetTotal() const;
};







#endif //OOP_4_HAND_H
