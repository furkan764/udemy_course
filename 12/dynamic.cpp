#include <iostream>

using namespace std;

int main(){
    int *int_ptr {nullptr};
    int_ptr = new int; // allocate an integer on the heap
    cout << int_ptr << endl; // adress
    cout << *int_ptr << endl; // 0
    *int_ptr = 100;
    cout << *int_ptr << endl; // 100
    delete int_ptr; // deallocate the storage


    size_t size {0};
    double *temp_ptr {nullptr};

    cout << "How many temps? "<< endl;
    cin >> size;
    temp_ptr = new double[size]; // allocate storage on the heap for size doubles

    temp_ptr[0] = 100;
    temp_ptr[1] = 200 ;
    for (size_t i {0}; i < 5; ++i)
        cout << temp_ptr[i] << endl; // adress
    delete [] temp_ptr; // deallocate the storage
    return 0;
}