#include"furkan.h"

class MyClass {
public:
    static int a; // Tüm MyClass nesneleri arasında paylaşılan static değişken
    int b;       // Her MyClass nesnesi için ayrı bir değişken
};

int MyClass::a = 0; // Static değişkenin tanımı ve başlatılması

int main() {
    MyClass obj1, obj2;

    obj1.a = 5; // Tüm nesneler için aynı "a" değeri paylaşılır
    obj2.a = 10;

    obj1.b = 3; // Her nesne kendi "b" değerini saklar
    obj2.b = 7;

    std::cout << "obj1.a: " << obj1.a << std::endl;
    std::cout << "obj2.a: " << obj2.a << std::endl;
    std::cout << "obj1.b: " << obj1.b << std::endl;
    std::cout << "obj2.b: " << obj2.b << std::endl;

    return 0;
}
