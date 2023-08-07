#include <iostream>

class MyClass {
public:
    int myValue;
    int x,y;
    void printValue() {
        std::cout << "Value: " << myValue << std::endl;
    }
    MyClass(int x , int y){
        this->x = x;
        this->y = y;
        printf("x: %d, y: %d\n", x, y);
    }
};

int main() {
    MyClass obj(1,2);
    MyClass* ptr = &obj;
    
    ptr->myValue = 42; // "->" operatörüyle üyeye erişim
    ptr->printValue(); // "->" operatörüyle fonksiyona erişim
    obj.printValue(); // "." operatörüyle fonksiyona erişim

    MyClass obj2(3,4);
    return 0;
}
