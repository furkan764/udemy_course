#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype> 


/*
*/
struct Square_Functor
{
    void operator()(int x) 
    {
        std::cout << x*x << " ";
    }
};
Square_Functor square; //function object
std::vector<int> vec1 {1,2,3,4,5};

//////////////////////////

void square1(int x) 
{
    std::cout << x*x << " ";
}
std::vector<int> vec2 {1,2,3,4};

////////////////////////// lambda

std::vector<int> vec3 {10,20,30,40,50};




int main(){
std::cout<<std::endl;
std::for_each(vec1.begin(), vec1.end(), square); //1
std::cout << std::endl;
std::for_each(vec2.begin(), vec2.end(), square1); //2

std::cout << std::endl;
/// lambda
std::for_each(vec3.begin(), vec3.end(), [](int x){std::cout << x*x << " ";});

std::cout << std::endl;

auto loc = std::find(vec3.begin(), vec3.end(),10); 
// ya da 
auto loc1 = std::find(std::begin(vec3), std::end(vec3),30);
if (loc1 != vec3.end()) {
    std::cout << "Found at position: " << std::distance(vec3.begin(), loc1) << std::endl;
}
else {
    std::cout << "Not found" << std::endl;

}
    

}