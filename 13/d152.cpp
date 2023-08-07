#include "furkan.h"

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    std::string get_name() const { return name; } // fonskiyonu const olarak belirlemzsek const objeleri kullanamayız.

    void set_name(std::string name_val) { name = name_val; }
    // overloaded constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);

  
};
Player::Player()
    : Player{"None", 0, 0}
{
}
Player::Player(string name_val)
    : Player{name_val, 0, 0}
{
}
// köle constructor
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}
{
}

void display_player_name(const Player &p)
{
    cout << p.get_name() << endl;
}

int main()
{
    const Player villain{"Villain", 100, 55};
    Player hero{"Hero", 100, 15};
    display_player_name(villain);
    display_player_name(hero);
    
    return 0;
}