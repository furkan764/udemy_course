#include <iostream>
#include <vector>
#include <algorithm>

void display(std::vector<int> vec){
    for(auto x: vec){
        std::cout << x << " ";
    }
    std::cout << std::endl;
}
int main(){
    std::vector<int> vec1 {1,2,3,4,5,6};
    std::vector<int> vec2 {10,20,30,40,50};
    std::vector<int> vec3;

    std::transform(vec1.begin(), vec1.end(), vec2.begin(),std::back_inserter(vec3),
                    [] (int x, int y) {return x*y;});
    display(vec1);
    display(vec2);
    display(vec3);
    auto it = std::find(vec1.begin(), vec1.end() , 5);
    if(it != vec1.end()){
        vec1.insert(it, vec2.begin(), vec2.end());
    }
    else{
        std::cout << "Not found" << std::endl;
    }
    display(vec1);
    display(vec2);
    
}