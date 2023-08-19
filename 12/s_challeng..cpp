#include <iostream>
#include <vector>   
#include <string>

using namespace std;

void print_array(const int arr[], size_t size);
void apply_all(const int arr1[], size_t size1, const int arr2[], size_t size2);

void print_array(const int * arr, size_t size){

    for(size_t i{0}; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void apply_all(const int *arr1, size_t size1, const int *arr2, size_t size2){
    vector<int> vec;
    for(size_t i{0}; i<size1; i++){
        for(size_t j{0}; j<size2; j++){
            vec.push_back(arr1[i]*arr2[j]);
        }
    }
    for(size_t i{0}; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

int main(){
    int my_arr1[]{1,2,3,4,5};
    int my_arr2[]{10,20,30};
    apply_all(my_arr1, 5, my_arr2, 3);
    print_array(my_arr1, 5);
    print_array(my_arr2, 3);
}