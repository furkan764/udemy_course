#include <iostream> 
#include <string>
#include <vector>

class Player {
    //atributes 
    public:
    std::string name {"Player"};
    int health;
    int xp;

    //methods
    void talk(std::string);
    bool is_dead();
};

class Account {
    public:
    //atributes
    std::string name{"Account"};
    double balance{0.0};

    //methods
    bool deposit(double bal){balance += bal; 
    std::cout << "In deposit " <<bal<< std::endl;}
    bool withdraw(double bal){balance -= bal; 
    std::cout << "In withdraw" << std::endl;}
};


int main() {
Account frank_account;
frank_account.name = "Frank's account";
frank_account.balance = 5000.0;
frank_account.deposit(1000.0);
frank_account.withdraw(500.0);


Player frank;
Player hero;
/*
    Player players[] {frank, hero};
  
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero); // push_back ile vector'e ekleme yaptık.
*/
    Player *enemy {nullptr};
    enemy = new Player;
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    enemy->xp = 15;
    enemy->talk("I will destroy you!"); //pointer ile erişim sağladık.

    //frank kısmı
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;    
    frank.talk("Hello there");

    delete enemy;
    return 0;
}   

void Player::talk(std::string text_to_say) {
    std::cout << name << " says " << text_to_say << std::endl;
}