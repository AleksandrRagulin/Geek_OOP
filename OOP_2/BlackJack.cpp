//
// Created by Aleksandr on 19.07.2021.
//
#include <iostream>
#include "BlackJack.h"

void Card::Flip() {
    Up = !Up;
}

int Card::GetValue() {
    if (Value == J || Value == Q || Value == K) return 10;
    if (Value == A) return 1;
    return Value;
}
