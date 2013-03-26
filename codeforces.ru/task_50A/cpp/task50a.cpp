#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n = 4;
    int m = 2;
    cin >> n >> m;
    
    long dominoCount = 0;
    if (n % 2 == 0)
        dominoCount = m * (n/2);
    else 
        if (m % 2 == 0)
            dominoCount = n * (m/2);
        else
            dominoCount = (n/2)*m + (m/2);
    cout << dominoCount;
}
