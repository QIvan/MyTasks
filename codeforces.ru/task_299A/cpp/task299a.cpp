#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() 
{
	   int n = 10;
	   int k = 2;
	   string road(n, '.');
	   cin >> n >> k;
	   cin >> road;
	   /*for(int i=1; i<3; ++i)
	       road[i] = '#';*/
	   if (*road.rbegin());
	   string barrier(k, '#');
	   if(road.find(barrier) == string::npos)
	       cout << "YES";
	   else
	       cout << "NO";
	   
}
