#include <iostream>
#include <vector>
#include <string>

using namespace std;

void double_data(int *int_ptr)
{
    *int_ptr *= 2; // girişe veriyi iki ile çarpıp geri döndürür
}

int main()
{
    int sayi{10};
    int *ptr = &sayi;
    cout << sayi << endl;
    
    double_data(ptr);
    cout << sayi << endl;

    double_data(&sayi);
    cout << sayi << endl;


    return 0;
}