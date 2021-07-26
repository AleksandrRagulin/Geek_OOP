//
// Created by Aleksandr on 26.07.2021.
//

#include "Hand.h"

void Hand::Add(Card *pCard) {
    m_Cards.push_back(pCard);
}

void Hand::Clear() {
    m_Cards.clear();
}

int Hand::GetTotal() {
    int sum = 0;
    int end = m_Cards.size();
    for(int i=0; i<end;++i) sum += m_Cards[i]->GetValue();
    return sum;
}