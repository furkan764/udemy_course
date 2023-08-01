#include "furkan.h"

class Player
{
    private:   
    string name;
    int health;
    int xp;
    public:
    //overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val,int health_val,int xp_val);
};
// modern kullanım
Player::Player()
    :name{"None"},health{100},xp{3}{
    }
Player::Player(string name_val, int health_val, int xp_val)
    :name{"None"},health{100},xp{3}{
    }
int main()
{
    Player empty("None",100,3);
    return 0;
}