
enum Signs {Bubi,Chervi,Kresti, Piki};
enum Values { _2=2,_3,_4,_5,_6,_7,_8,_9,_10,J,Q,K,A};

class Card{
    Signs Sign;
    Values Value;
    bool Up;
public:
    Card(Signs sign, Values val, bool up): Sign(sign),Value(val),Up(up){}
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