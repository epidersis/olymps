#include <iostream>


int main()
{
    short n;
    std::cin >> n;
    
    if (n > 3 && n % 2 == 0)
        std::cout << "YES";
    else
        std::cout << "NO";
    
    return 0;
}

