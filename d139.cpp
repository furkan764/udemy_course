#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
    // attributes
    string name{"Player"};
    int health;
    int xp;

public:
    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl; }
    bool is_dead();
};

int main()
{
    Player frank;
 //   frank.name = "Frank";  compile error
 //   frank.talk("Hello there");   compile error

    frank.talk("Hello there");

    return 0;
}