#include <iostream>

class myClass {
private:
    int privateMember;

public:
    myClass() : privateMember(0) {}

    // Friend işlev tanımı
    friend void friendFunction(myClass &obj);

    void display() {
        std::cout << "privateMember: " << privateMember << std::endl;
    }
};

// Friend işlev tanımı
void friendFunction(myClass& obj) {
    obj.privateMember = 42; // Friend işlevi, privateMember'a erişebilir
    obj.display();
}

int main() {
    myClass obj;
    obj.display();

    friendFunction(obj); // Friend işlevini çağırıyoruz

    obj.display(); // privateMember'ın değeri değişti

    return 0;
}
