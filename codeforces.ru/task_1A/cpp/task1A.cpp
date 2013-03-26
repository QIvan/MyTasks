#include <iostream>

using namespace std;
int main()
{
    long long n = 1000000000; 
    long long m = 1000000000;
    long long a = 1;
    cin >> n >> m >> a;
    
    long long na = n / a;
    if (n % a != 0)
        ++na;
    //cout << na << endl;
    long long ma = m / a;
    if (m % a != 0)
        ++ma;
    //cout << ma << endl;
    unsigned long long res = ma * na;
    cout << res;
    return 0;
}