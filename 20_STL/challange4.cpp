#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    std::queue<char> q;
    std::stack<char> st;
    for (auto c : s)
    {
        if (std::isalpha(c))
        {
            q.push(std::toupper(c));   // kar kelimesini rak diye yazar var "k" front olur
            st.push(std::toupper(c));   // burda kar ı alt alta yazar var "r" top olur 
        }
    }
    char c1{};
    char c2{};

    while(!st.empty()){
        c1 = q.front();
        q.pop();
        c2 = st.top();
        st.pop();
        if(c1 != c2)
            return false;
    }

    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    return false;
}

int main()
{
    std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                          "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                          "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result"
              << "String" << std::endl;
    for (const auto &s : test_strings)
    {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}