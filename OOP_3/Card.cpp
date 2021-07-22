#include "Card.h"
void Card::Flip() {
    Up = !Up;
}

int Card::GetValue() {
    if (Value >10 && Value <14) return 10;
    if (Value == A) return 1;
    return Value;
}