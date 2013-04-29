#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string num;
    cin >> num;
    size_t count47 = count(num.begin(), num.end(), '4') 
          + count(num.begin(), num.end(), '7');
    
    bool res = (count47 == 4) || (count47 == 7);
    cout << (res ? "YES" : "NO");
    return 0;
}