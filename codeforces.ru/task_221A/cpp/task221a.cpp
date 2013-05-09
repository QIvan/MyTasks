#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


int main() 
{
    int n = 0;
    cin >> n;
    vector<int> a;
    a.push_back(n);
	   for (int i=1; i<n; ++i)
	       a.push_back(i);

	   copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));
}
