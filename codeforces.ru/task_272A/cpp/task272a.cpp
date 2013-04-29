#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;



int main()
{
    int n = 1;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; ++i)
        cin >> v[i];
    
    int sum = 0;
    for (int i=0; i<n; ++i)
        sum += v[i];
    
    ++n;
    int result = 0;
    for (int i=1; i<=5; ++i)
    {
        if ((sum+i-1) % (n) != 0)
            ++result;
    
    	 //cout << "s " << sum+i << " " << (sum+i-1) % (n) << endl;
    
    }
    cout << result;
    return 0;
}