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
    vector<string> v(n);
    for (int i=0; i<n; ++i)
        cin >> v[i];
    
    int x = 0;
    for (int i=0; i<n; ++i)
    {
    	    if (v[i].find("++") != string::npos)
    	        ++x;
    	    else
    	        --x;
    }
    cout << x;
}