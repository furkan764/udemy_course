#include<iostream>
#include<queue>
#include<string>
//FIFO queue
//LIFO stack
int main(){

    std::queue<int> q;
    for (int i = 0; i < 10; i++)
    {
        q.push(i);
    }
    std::cout << "size: " << q.size() << std::endl;
    std::cout << "front: " << q.front() << std::endl;
    std::cout << "back: " << q.back() << std::endl;
    while (!q.empty())
    {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "size: " << q.size() << std::endl;
    // öne ve arkaya erşişim
    q.front() = 100;
    q.back() = 200;
    std::cout << "front: " << q.front() << std::endl;
}