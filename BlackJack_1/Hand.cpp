#include "Hand.h"

void Hand::Add(Card *pCard) {
    m_Cards.push_back(pCard);
}

void Hand::Clear() {
    m_Cards.clear();
    int end = m_Cards.size();
    for (int i=0;i<end;++i) delete m_Cards[i];
}

int Hand::GetTotal() const {
    int sum = 0;
    int end = m_Cards.size();
    for(int i=0; i<end;++i) sum += m_Cards[i]->GetValue();
    return sum;
}