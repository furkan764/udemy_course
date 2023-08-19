#include <iostream>
#include <vector>

using namespace std;

int main(){
    int array[5] {1,2,3,4,5};
    int *ptr {array};   //  *ptr = &adress yapısı gibi düşünülebilir.
    cout << *ptr << endl; // 1
    cout << ptr[0] << endl; // 1
    cout << array[0] << endl; //1

    cout << array << endl; // adress
    cout << ptr << endl; // adress
    cout << &array[0] << endl; // adress
    cout << &ptr[0] << endl; // adress

    cout << (array+1) << endl; // adress 2. elemanın adresi

    cout <<  ptr[1] << endl; // 2
    cout << *(ptr+1) << endl; // 2

}