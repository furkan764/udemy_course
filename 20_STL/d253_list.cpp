#include <iostream>
#include <list>
#include <algorithm>
#include <forward_list>

// konteynırın içindeki ögelere doğrudan erişmek için iyi bir tercih
class Person {
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    std::string name;
    int age;
public:
    Person() : name{"Unknown"}, age{0} {}
    Person(std::string name, int age) 
        : name{name}, age{age}  {}
    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }
    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

std::ostream &operator<<(std::ostream &os, const Person &p) {
    os << p.name << ":" << p.age;
    return os;
}


template <typename T>
void display(const std::list<T> &l) {
    std::cout << "[ ";
    for (const auto &elem: l) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;
}

void list()
{
    std::list<int> list1{1, 2, 3, 4, 5};
    auto it = std::find(list1.begin(), list1.end(), 3);

    list1.insert(it, 100);
    list1.erase(it);
    list1.resize(10);
    std::cout << list1.size() << std::endl;
    std::cout << list1.max_size() << std::endl;
    for (auto i : list1)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    list1.resize(3);
    for (auto i : list1)
    {
        std::cout << i << " ";
    }
}

void forward(){
    std::forward_list<int> list{1, 2, 3, 4, 5};
    auto it = std::find(list.begin(), list.end(), 3);
   // list.size (); yok
   list.insert_after(it , 100);
   list.emplace_after(it, 200);
   list.emplace_front(300);
   for(auto i : list){
       std::cout << i << " ";
   }
    std::cout << std::endl;
}
void test5() {
    std::cout << "\nTest5 =========================" << std::endl;

    std::list<Person>  stooges {
        {"Larry", 18},
        {"Moe", 25},
        {"Curly", 17}
    };
    
    display(stooges);
    std::string name;
    int age{};
    std::cout << "\nEnter the name of the next stooge: ";
    getline(std::cin, name);
    std::cout << "Enter their age: ";
    std::cin >> age;
    
    stooges.emplace_back(name, age);
    display(stooges);
    
    // Insert Frank before Moe
    auto it = std::find(stooges.begin(), stooges.end(), Person{"Moe", 25});
    if (it != stooges.end())
        stooges.emplace(it, "Frank", 18);
        stooges.sort();
    display(stooges);    
}
int main()
{
    //forward();
    //list();
    test5();
    return 0;
}