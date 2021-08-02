#include "Generic Player.h"
bool GenericPlayer::IsBoosted() {
    return (GetTotal()>21);
}

void GenericPlayer::Bust() {
    cout << endl << name << " has more than 21" << endl;
}