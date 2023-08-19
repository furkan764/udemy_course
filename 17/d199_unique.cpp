#include <iostream>
#include <memory>
class Test
{
private:
    int sayi;
public:

    Test(): sayi{0} { std::cout << "Test() " <<sayi<< std::endl; }
    Test(int sayi): sayi{sayi} { std::cout << "Test(sayi) " <<sayi<< std::endl; }
    int get_data() { return sayi; }
    ~Test() { std::cout << "~Test() " <<sayi<< std::endl; }
};
int main()
{
    std::unique_ptr<Test> p1(new Test(5));
    std::unique_ptr<Test> p2 = std::make_unique<Test>(10);
    auto p3 = std::make_unique<Test>(15);
    std::unique_ptr<Test> p4;
    p4 = std::move(p1); // move

    return 0;
}