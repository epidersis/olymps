#include <bits/stdc++.h>

using namespace std;

int main()
{
    short n;
    cin >> n;
    
    if ( n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n == 744 || n == 774 ) cout << "YES";
    else cout << "NO";
    
}
