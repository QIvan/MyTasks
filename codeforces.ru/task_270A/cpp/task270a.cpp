#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n = 4;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i)
        cin >> v[i];
    
    
    for (int i=0; i<n; ++i)
    {
        float angle = 360.0 / (180.0-v[i]);
        if (angle - ((int) angle) == 0.0)
           cout << "YES";
        else
            cout << "NO";
        	cout << endl;
    }
}