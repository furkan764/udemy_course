#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

bool is_palindrome(const std::string &s)
{
    std::deque<char> deq;
    std::string str;
    for(char c : s){
        if(std::isalpha(c)){
            deq.push_back(std::toupper(c));
        }
        
        if (c != ' '){
        deq.front() = c;
        str = c + str;
        }
    }
    
    if (str == s)
    {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    std::cout << std::boolalpha;
    std::vector<std::string> test_strings{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
                                          "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
                                          "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome"};

    std::cout << std::setw(8) << std::left << "Result"
              << "String" << std::endl;
    for (const auto &s : test_strings)
    {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}