#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <list>
#include <numeric>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i=0; i<n; ++i)
         cin >> data[i];
    
    cout << (double)accumulate(data.begin(), data.end(), 0) / data.size();
    
    
}
