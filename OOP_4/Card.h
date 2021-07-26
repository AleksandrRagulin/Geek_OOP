#ifndef OOP_4_CARD_H
#define OOP_4_CARD_H

enum rank { _2=2,_3,_4,_5,_6,_7,_8,_9,_10,J,Q,K,A};
enum Signs {Bubi,Chervi,Kresti, Piki};


class Card{
    Signs Sign;
    rank m_Rank;
    bool m_IsFaceUp;
public:
    Card(Signs sign, rank val, bool up): Sign(sign),m_Rank(val),m_IsFaceUp(up){}
    Card() = default;

    void Flip();
    int GetValue();
};


class Player{
public:
    const char * Name;
    int score = 0;
    int cards = 0;
    Player(const char * nam):Name(nam){}
};

void game(Player * players, int Player_Quant);
void init(int Pl_quant, int packs);

#endif //OOP_4_CARD_H
