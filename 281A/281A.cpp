#include <iostream>

int main()
{
    char word[1001];
    std::cin >> word;
    
    if (word[0] >= 97) word[0] -= 32;
    
    std::cout << word;
    
    return 0;
}
