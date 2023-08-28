// vector e benzer ama contigous memory de saklanmaz
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

template <typename T>
void display(std::deque<T> deq)
{
    std::cout << "[ ";
    for (auto x : deq)
    {
        std::cout << x << " ";
    }
    std::cout << "]" << std::endl;
    std::cout << std::endl;
}

void test1()
{
    std::cout << "Test1 =========================" << std::endl;
    std::deque<int> deq{1, 2, 3, 4, 5};
    display(deq);

    deq = {2, 4, 5, 6};
    display(deq);

    std::deque<int> deq1(10, 100);
    display(deq1);

    deq[0] = 100;
    deq.at(1) = 200;
    display(deq);
}
void test2()
{
    std::cout << "Test2 =========================" << std::endl;

    std::deque<int> deq{0, 0, 0};
    display(deq);

    deq.push_back(10);
    deq.push_back(20);
    display(deq);

    deq.push_front(100);
    deq.push_front(200);
    display(deq);

    std::cout << "Front: " << deq.front() << std::endl;
    std::cout << "Back: " << deq.back() << std::endl;
    std::cout << "Size: " << deq.size() << std::endl;

    deq.pop_back();
    deq.pop_front();
    display(deq);
}

void test3()
{
    std::cout << "Test3 =========================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> deq;

    for (auto x : vec)
    {
        if (x % 2 == 0)
            deq.push_back(x);
        else
            deq.push_front(x);
    }
    display(deq);
     

    deq.clear();
}

void test4 (){
    std::cout << "Test4 =========================" << std::endl;

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::deque<int> deq;

    std::copy(vec.begin(), vec.end(), std::front_inserter(deq));
    display(deq);
}
int main()
{
    test1();
    test2();
    test3();
    test4();


    return 0;

}
