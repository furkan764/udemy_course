#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{

private:
    string name;
    int health;
    int xp;

public:
    void set_name(string name_val) { name = name_val; }
    string get_name() { return name; }
    Player(){
        name = "None";
        health = 100;
        xp = 3;
    }
    ~Player(){
      //  cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    Player frank;
    frank.set_name("Frank");
    cout << frank.get_name() << endl;
    return 0;
}
// eğer frank'a isim girmezsek None yazdırır.