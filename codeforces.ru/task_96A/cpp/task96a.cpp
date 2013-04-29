#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main()
{
    string s;
    cin >> s;
    bool result = (s.find("1111111") != string::npos);
    result |= (s.find("0000000") != string::npos);
    cout << (result ? "YES" : "NO");
}
