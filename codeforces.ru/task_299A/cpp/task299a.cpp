#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() 
{
	   int n = 10;
	   cin >> n;
	   vector<int> data(n);
	   for (int i=0; i<n; ++i)
	       cin >> data[i];
	
	   vector<int>::iterator min = min_element(data.begin(), data.end());
	   bool res = true;
	   for (int i=0; i<n; ++i)
	   {
	       if (data[i] % *min != 0)
	       {
	           res = false;
	       	    break;
	       }
	   }
	   cout << (res ? *min : -1);
}
