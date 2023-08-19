#define PI 3,14
#define MAX(a,b) ((a)>(b)?(a):(b))
#define SQUARE(x) ((x)*(x))

#include <iostream>

int main()
{
    int result;
    result = MAX(5, 6);
    std::cout<<result<<std::endl;
    result = MAX(5, 6) + 1;
    std::cout<<result<<std::endl;

    result = SQUARE(5);
    std::cout<<result<<std::endl;
    result = 100 / SQUARE(5);
    std::cout<<result<<std::endl;

    result = SQUARE(PI);
    std::cout<<result<<std::endl;


    return 0;
}