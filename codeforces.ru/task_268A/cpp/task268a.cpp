#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

struct VFind
{
     vector<int> _v;
	    VFind(vector<int> v) : _v(v) {}
	    int operator()(int sum, int e)
	    {
	        return sum + count(_v.begin(), _v.end(), e);
	    }
};

int main() 
{
	   int n = 3;
	   cin >> n;
	   vector<int> home(n);
	   vector<int> guest(n);
	   for(int i=0; i<n; ++i)
	       cin >> home[i] >> guest[i];
	   /*home[0] = 4; guest[0] = 2;
	   home[1] = 2; guest[1] = 4;
	   home[2] = 2; guest[2] = 4;*/
	   int res = accumulate(guest.begin(), guest.end(), 0, VFind(home)); 
    cout << res;
}
