#include <iostream>
#include <memory>

class Test {
public:
    Test(int val) : value(val) {
        std::cout << "Test object constructed with value: " << value << std::endl;
    }
    int get_value() const {
        return value;
    }
    ~Test() {
        std::cout << "Test object destroyed with value: " << value << std::endl;
    }

private:
    int value;
};

int main() {
    std::shared_ptr<Test> p1 = std::make_shared<Test>(5);
    std::shared_ptr<Test> p2 = p1; // p2, p1 ile aynı nesneyi paylaşıyor
    std::cout <<p1<<" "<<p2<<std::endl;
    
    p1.reset(); // p1 artık nesneyi paylaşmıyor, ancak nesne hala p2 tarafından paylaşılıyor
    std::cout <<p2->get_value() << std::endl;
    //std::cout<<"get():  "<<p2.get()<<std::endl;
    return 0;
}
