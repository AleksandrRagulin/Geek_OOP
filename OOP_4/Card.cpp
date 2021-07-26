#include "Card.h"

void Card::Flip() {
    m_IsFaceUp = !m_IsFaceUp;
}

int Card::GetValue() {
    if (m_Rank >10 && m_Rank <14) return 10;
    if (m_Rank == A) return 1;
    return m_Rank;
}

