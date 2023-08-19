#include <iostream> 
#include <vector>

using namespace std;

void double_data(int &n)
{   
    int a ;
    a = n*n;
    n = a; // girişe veriyi iki ile çarpıp geri döndürür
}


int main()
{
    int sayi{10};
    int *ptr = &sayi;
   double_data(*ptr);
    cout << sayi << endl;
    return 0;
}