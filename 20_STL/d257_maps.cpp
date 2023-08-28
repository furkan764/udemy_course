// hızlı erişim
//  STL Map ve sets sağlar ?
//  balanca binary treeye ya da hashsets e uygulanır.
//  çoğunlujla efficent bir şekilde çalışır.

// maplerde key ve value vardır.
// setlerde sadece key vardır.

// maplerde keyler unique olmalıdır.
// setlerde keyler unique olmalıdır.

#include <iostream>
#include <map>
#include <string>
#include <set>
void display(std::map<std::string, int> &m)
{
    std::cout << "[" << std::endl;
    for (auto const &e : m)
        std::cout << e.first << " : " << e.second << std::endl;
    std::cout << "]" << std::endl;
}
void test1()
{
    std::cout << "\ntest1 ========================" << std::endl;

    std::map<std::string, int> m{
        {"Larry", 3},
        {"Moe", 1},
        {"Curly", 2}};
    display(m);
    m.insert(std::make_pair("Ferdo", 30));
    m.insert(std::pair<std::string, int>("Anna", 10));
    display(m);

    auto it = m.find("Ferdo");
    if (it != m.end())
        std::cout << "Found : " << it->first << " : " << it->second << std::endl;
    // m.clear();
    // display(m);
    // m["Furkan"] = 20;

    // display(m);
    // m["Furkan"] = 30;
    // display(m);

    std::map<std::string, std::set<int>> grades{
        {"Larry", {100, 90}},
        {"Moe", {94}},
        {"Curly", {80, 90, 100}}};
}

int main()
{
    test1();

    return 0;
}