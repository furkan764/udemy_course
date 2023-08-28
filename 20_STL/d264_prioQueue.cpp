#include <iostream>
#include <queue>

// kullanır mıyım sanmam

int main(){

    std::priority_queue<int> pq;
    pq.push(100);
    pq.push(20);
    pq.push(200);
    pq.push(50);

    std::cout << "size: " << pq.size() << std::endl;
    std::cout << "top: " << pq.top() << std::endl;
    pq.pop(); // 200 gitti

    while (!pq.empty())
    {
        std::cout << pq.top() << " ";
        pq.pop();
    }
}