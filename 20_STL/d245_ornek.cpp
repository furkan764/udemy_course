#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

void ornek1() {
    // const reverse iterator over a list
    std::list<std::string> name {"Larry", "Moe", "Curly"};
    auto it2 =name.crbegin();    // iterator over list of strings  point to Curly
    std::cout << *it2 << std::endl;
    it2++;  // point to Moe
    std::cout << *it2 << std::endl;

    // iterator over a map
    std::map<std::string, std::string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it3 = favorites.begin();   // iterator over map of string, string pairs
    while (it3 != favorites.end()) {
        std::cout << it3->first << " : " << it3->second << std::endl;
        it3++;
    }
}
int main(){
    ornek1();
    return 0;
}