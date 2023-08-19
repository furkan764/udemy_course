#include<iostream>
#include<vector>

int main(){

    std::vector<int> vec {1,2,3,4,5};
    std::vector<int>::iterator it = vec.begin();
    auto it3 = vec.cbegin(); //const iterator
    vec.rbegin(); //reverse iterator
    vec.crbegin(); //const reverse iterator

    std::vector<int>::reverse_iterator it1 = vec.rbegin();
    //vec.clear();

    std::cout << *it1 << std::endl;

    it = vec.insert(it, 100);     // insert 100 at the beginning of the vector
    std::cout << *it << std::endl;
    it++;
    it = vec.insert(it, 200);       // insert 200 before the element pointed to by it

    std::cout << "----------------" << std::endl;
    for(auto vector : vec){
        std::cout << vector<<" " ;
    }
    std::cout << std::endl;
    return 0;
}