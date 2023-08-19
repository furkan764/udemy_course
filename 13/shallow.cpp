#include <iostream>
#include <vector>

class Person {
public:
    Person(const std::string& name, int age, const std::vector<std::string>& hobbies)
        : name(name), age(age), hobbies(hobbies) {}

    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << ", Hobbies: ";
        for (const auto& hobby : hobbies) {
            std::cout << hobby << " ";
        }
        std::cout << std::endl;
    }
    void addHobby(const std::string& hobby) {
        hobbies.push_back(hobby);
    }

private:
    std::string name;
    int age;
    std::vector<std::string> hobbies;
};
int main() {
    std::vector<std::string> hobbies = {"reading", "swimming"};
    Person person1("Alice", 30, hobbies);

    Person person2 = person1; // Shallow copy

    // Add a new hobby to person2's hobbies
    person2.printInfo(); // Output: Name: Alice, Age: 30, Hobbies: reading swimming

    person2.addHobby("hiking");
    
    // Print person1's hobbies after modifying person2's hobbies
    person1.printInfo(); // Output: Name: Alice, Age: 30, Hobbies: reading swimming hiking

    return 0;
}
