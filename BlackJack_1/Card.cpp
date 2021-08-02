#include "Card.h"

void Card::Flip() {
    m_IsFaceUp = !m_IsFaceUp;
}

int Card::GetValue() {
    if(m_IsFaceUp) {
        if (m_Rank > 10) return 10;
        return m_Rank;
    }
    return 0;
}

