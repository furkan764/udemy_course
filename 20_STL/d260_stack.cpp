#include <iostream>
#include <stack>
#include <string>

#include <vector>
#include <deque>
#include <list>

int main()
{
    std::stack<int> s;
    std::stack<int ,std::vector<int>> s2;
    std::stack<std::deque<int>> s3;
    std::stack<std::list<int>> s4;

    for (int i : {1, 2, 3, 4, 5})
    {
        s.push(i);
        
    }
    std::cout << "size: " << s.size() << std::endl;
    std::cout << "top: " << s.top() << std::endl;
    s.pop();
    std::cout << "size: " << s.size() << std::endl;
    std::cout << "top: " << s.top() << std::endl;

}
/*
stack sadece top a erişim sağlar
*/