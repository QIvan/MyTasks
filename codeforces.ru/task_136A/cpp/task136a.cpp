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
    
    vector<int> res(n);
    for (int i=0; i<n; ++i)
        res[v[i]-1] = i+1;
    
    copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
}