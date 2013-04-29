#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


int main()
{
    int n = 6;
    cin >> n;
    vector<int> m(n);
    for (int i=0; i<n; ++i)
        cin >> m[i];
        
    sort(m.begin(), m.end());
    
    int result = 1;
    int mySum = m.back(); 
    m.pop_back();
    int hisSum = accumulate(m.begin(), m.end(), 0);
    while (hisSum >= mySum)
    {
   // cout << hisSum << ' ' << mySum << endl;
    	    ++result;
    	    mySum += m.back();
    	    m.pop_back();
    	    hisSum = accumulate(m.begin(), m.end(), 0);
    }
    cout << result;
}
