//---- DO NOT MODIFY THIS FILE----

#include <iostream>
#include <string>


class Dog {
public:
    std::string name;
    int age;
};




int main(){
//---- WRITE YOUR CODE BELOW THIS LINE----
Dog spot;
spot.name = "Spot";
spot.age = 5;


std::cout << "Name: " << spot.name << std::endl;
std::cout << "Age: " << spot.age << std::endl;

//---- WRITE YOUR CODE ABOVE THIS LINE----
//---- DO NOT CHANGE THE CODE BELOW----
    return 0;
}