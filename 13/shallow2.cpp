#include <iostream>

class Data {
private:
    int* intValue;
    double* doubleValue;

public:
    Data(int i, double d);
    Data(const Data& source);
    //~Data();

    int getIntValue() const { return *intValue; }
    double getDoubleValue() const { return *doubleValue; }
};

Data::Data(int i, double d) {
    intValue = new int(i);
    doubleValue = new double(d);
}

Data::Data(const Data& source)
    : intValue(new int(*(source.intValue))), doubleValue(new double(*(source.doubleValue))) {
    std::cout << "Copy constructor - shallow copy" << std::endl;
}

// Data::~Data() {
//     delete intValue;
//     delete doubleValue;
//     std::cout << "Destructor freeing data" << std::endl;
// }

void display_data(const Data& d) {
    std::cout << "Int Value: " << d.getIntValue() << ", Double Value: " << d.getDoubleValue() << std::endl;
}

int main() {
    Data data1(42, 3.14);
    display_data(data1);

    Data data2 = data1; // Shallow copy
    display_data(data2);

    data2 = Data(99, 2.71);
    display_data(data2);

    return 0;
}
