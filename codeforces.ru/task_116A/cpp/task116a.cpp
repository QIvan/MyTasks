#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
	   
	   vector< pair<int, int> > stations(n);
	   for (int i=0; i<n; ++i)
	       cin >> stations[i].first >> stations[i].second;

    int max = 0;
    int curr = 0;
    for (int i=0; i<n; ++i)
    {
    	    curr += -stations[i].first + stations[i].second;
    	    if (max < curr) 
            max = curr;
    }
    cout << max;
}
