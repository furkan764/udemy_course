#include "furkan.h"

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    std::string get_name(){
        return name;
        }
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(string name_val="None", int health_val=0, int xp_val=0);
    // Copy constructor
    Player(const Player &source);

    ~Player(){
        cout<<"Destructor called for "<<name<<endl;
    }
};
// d145 deki köle constructor
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout<<"Three args constructor called for "<<name<<endl;
    }


//copy constructor
Player::Player(const Player &source)
    //:name(source.name), health(source.health), xp(source.xp
    :Player(source.name, source.health, source.xp) // ne işe yarıyor
    {
     cout<<"Copy constructor - made copy of: "<<source.name<<endl;
    }

void display_player(Player p){
    cout<<"Name: "<<p.get_name()<<endl;
    cout<<"Health: "<<p.get_health()<<endl;
    cout<<"XP: "<<p.get_xp()<<endl;
}
int main()
{
    Player empty{"XXXXXX",100,50};

    Player my_new_object = empty ;
    
    return 0;
}
//d145 ile karşılaştır