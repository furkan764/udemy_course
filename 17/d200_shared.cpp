
#include <iostream>
#include <memory>
#include <vector>
// bir nesneye unique_ptr ile bir kere sahip olunabilirken shared_ptr ile birden fazla sahip olunabilir.
// shared_ptr ile bir nesneye sahip olunduğunda nesnenin bir kopyası oluşturulur ve bu kopya nesneye sahip olunur.
// copy edilir. kullanım sayısı sayılır.
// psuh_back kullanılır.
class Test
{
private:
    int sayi;

public:
    Test() : sayi{0} { std::cout << "Test() " << sayi << std::endl; }
    Test(int sayi) : sayi{sayi} { std::cout << "Test(sayi) " << sayi << std::endl; }
    int get_data() { return sayi; }
    ~Test() { std::cout << "~Test() " << sayi << std::endl; }
};
int main()
{
    std::shared_ptr<Test> p1(new Test(5));
    std::shared_ptr<Test> p2 = std::make_shared<Test>(10);
    auto p3 = std::make_shared<Test>(15);
    std::shared_ptr<Test> p4;
    p4 = p1; // copy
    std::cout << p1.use_count() << std::endl;
    std::cout << p4.use_count() << std::endl;
    p1.reset();
    std::cout << "p1 resetledikten sonra p4 kullanim sayisi " << p4.use_count() << std::endl;
    std::cout << "p1 kullanim sayisi " << p1.use_count() << std::endl;
    p2.swap(p3);
    std::cout << "p2 ve p3 yer degistirdi" << p2->get_data() << " " << p3->get_data() << std::endl;

    std::shared_ptr<Test> p10 = std::make_shared<Test>(20);
    std::shared_ptr<Test> p11 = std::make_shared<Test>(21);
    std::shared_ptr<Test> p12 = std::make_shared<Test>(22);

    std::vector<std::shared_ptr<Test>> vec;
    vec.push_back(p10);
    vec.push_back(p11); // bu işlemi unique de yapamıyoruz.
    vec.push_back(p12);

    for (const auto &vectors : vec)
    {
        std::cout << vectors << std::endl;
        std::cout << vectors.use_count() << std::endl;
    }

    return 0;
}