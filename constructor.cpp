#include "furkan.h"

class Player
{

private:
    string name;
    int health;
    int xp;

public:
    Player()
    {
        name = "None";
        health = 100;
        xp = 3;
    }
};
class Player{
    private:
    string name;
    int health;
    int xp;
    Player()
    :name{"None"},health{100},xp{3}{
    }
};
// ikiside aynı işlevi görür ama 2. daha okunurdur ve daha moderndir
int main()
{}
//eski kullanımda biz init etmesek bile
//default olarak init edilir