#include <iostream>
#include <vector>
#include <algorithm>
#include <array>


void display(const std::array<int, 5> &arr)
{
    std::cout << "[ ";
    for (auto &i : arr)
        std::cout << i << " ";
    std::cout << "]" << std::endl;
}
void test1()
{
    std::cout << std::endl;
    std::array<int, 5> arr1{1, 2, 3, 4, 5};
    std::array<int, 5> arr2{10, 20, 30, 40, 50};

    std::cout << "arr1: ";
    for (auto i : arr1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "arr1.at(2): " << arr1.at(2) << std::endl;
    std::cout << "arr1[2]: " << arr1[2] << std::endl;
    std::cout << "arr1.front(): " << arr1.front() << std::endl;
    std::cout << "arr1.back(): " << arr1.back() << std::endl;
    std::cout << "arr1.data(): " << arr1.data() << std::endl;

    // std::cout << std::endl;

    std::cout << "arr1.size(): " << arr1.size() << std::endl;
    std::cout << "arr1.max_size(): " << arr1.max_size() << std::endl;
    std::cout << "arr1.empty(): " << arr1.empty() << std::endl;

    std::cout << std::endl;

    std::cout << "arr1.fill(10): ";
    arr1.fill(10);
    for (auto i : arr1)
        std::cout << i << " ";
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "arr1.swap(arr2): ";
    arr1.swap(arr2);
    for (auto i : arr1)
        std::cout << i << " ";
    std::cout << std::endl;

    int *p = arr1.data();
    std::cout << "arr1.data(): " << p << std::endl;
}
void test2()
{
    std::array<int, 5> arr1{2,1,4,5,3};
    std::array<int,5>::iterator min_num = std::min_element(arr1.begin(),arr1.end());
    display(arr1);

    auto max_num = std::max_element(arr1.begin(),arr1.end());
    std::cout << "min: " << *min_num << " max: " << *max_num << std::endl;

    auto adjacent = std::adjacent_find(arr1.begin(),arr1.end()); // yan yana aynı olan ilk elemanı bulur

}

int main(){

    //test1();
    std::cout << std::endl;
    test2();
}