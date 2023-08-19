#include <iostream>
#include <string>

class DeepCopyExample {
public:
    DeepCopyExample(const std::string& data) : data_(new std::string(data)) {}

    // Copy constructor for deep copy
    DeepCopyExample(const DeepCopyExample& other) : data_(new std::string(*(other.data_))) {}

    // Destructor to clean up dynamically allocated memory
    ~DeepCopyExample() {
        delete data_;
    }

    void PrintData() {
        std::cout << *data_ << std::endl;
    }

private:
    std::string* data_;
};

class ShallowCopyExample {
public:
    ShallowCopyExample(const std::string& data) : data_(&data) {}

    void PrintData() {
        std::cout << *data_ << std::endl;
    }

private:
    const std::string* data_;
};

int main() {
    DeepCopyExample deepCopyObj("Deep Copy Example");
    DeepCopyExample deepCopyCopy(deepCopyObj);  // Deep copy

    ShallowCopyExample shallowCopyObj("Shallow Copy Example");
    ShallowCopyExample shallowCopyCopy(shallowCopyObj);  // Shallow copy

    // Modifying the original data to demonstrate the difference
    deepCopyObj.PrintData();       // Output: Deep Copy Example
    deepCopyCopy.PrintData();      // Output: Deep Copy Example

    shallowCopyObj.PrintData();    // Output: Shallow Copy Example
    shallowCopyCopy.PrintData();   // Output: Shallow Copy Example

    // Now, let's modify the copied data and see the difference
    //*(deepCopyCopy.data_) = "Modified Deep Copy";
    deepCopyObj.PrintData();       // Output: Deep Copy Example
    deepCopyCopy.PrintData();      // Output: Modified Deep Copy

    // Since shallow copy points to the same data, modification affects both
   // *(shallowCopyCopy.data_) = "Modified Shallow Copy";
    shallowCopyObj.PrintData();    // Output: Modified Shallow Copy
    shallowCopyCopy.PrintData();   // Output: Modified Shallow Copy

    return 0;
}
