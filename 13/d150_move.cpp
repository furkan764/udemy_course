#include "furkan.h"

class Move
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    Move(int d);              // constructor
    Move(const Move &source); // copy constructor
    Move(Move &&source) noexcept;
    ~Move();                  // destructor
};
Move::Move(int d)
{
    data = new int;
    *data = d;
    cout << "Constructor for: " << d << endl;
}
Move::Move(const Move &source)
    : Move{*source.data}
{
    cout << "Copy constructor - Move copy" << endl;
}

// konumuz bu 
Move::Move(Move &&source) noexcept
    : data{source.data}
{
    source.data = nullptr;
    cout << "Move constructor - moving resource: " << *data << endl;
}

Move::~Move()
{
    if (data != nullptr)
    {
        delete data;
        cout << "Destructor freeing data for " << data << endl;
    }
    else
    {
        cout << "Destructor freeing data for nullptr" << endl;
    }
}
void display_Move(Move s)
{
    cout << s.get_data_value() << endl;
}

int main()
{
    vector<Move> vec;
    vec.push_back(Move(10)); // vektörü genişlettiğimizde kopyalama yapıyor??
    vec.push_back(Move{20});
}