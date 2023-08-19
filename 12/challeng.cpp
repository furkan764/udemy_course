#include <iostream>
using namespace std;

void reverse_array(int* arr, int size) {
    //-- Write your code below this line 
    int *start = arr; //arr burda 1 
    cout<<"start: "<<*start<<endl;
    int *end = arr + (size - 1); 
    cout<<"end: "<<*end<<endl;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    //-- Write your code above this line
}
int main(){
    int arr[] {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse_array(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    
    return 0;
}