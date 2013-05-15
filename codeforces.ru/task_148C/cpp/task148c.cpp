#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <list>
#include <numeric>
#include <algorithm>

using namespace std;

void exit()
{
	   cout << -1;
	   exit(0);
}

int main() 
{
/*for (int ni=1; ni<=100; ++ni)
for (int ai=0; ai<16; ++ai)
for (int bi=0; bi<16; ++bi)//*/
{
/*if (ni <= ai+bi)
  continue;
  
cout << "num = " << ni << " " << ai << " " << bi<< endl; //*/
	   int n = 5;
	   int a = 2;
	   int b = 0;
	   cin >> n >> a >> b;
	   if (a+b == n)
	       exit();
	       
	   const int FIRST = 1;
	   int firstCount = 1;
	   list<int> res;
	   res.push_front(FIRST);
	   if (b == 0 && a != 0)
	   {
	       res.push_back(FIRST);
	       ++firstCount;
	   }
	   
	   if (a+b > n - firstCount)
	       exit(); 
	   
	   for (int i=0; i<b; ++i)
	   {
	   	    int sum = accumulate(res.begin(), res.end(), 0) + 1;
	   	    if (sum <= 50000)
	   	        res.push_back(sum);
	   	    else 
	   	        exit();
	   }
	   for (int i=1; i<=a; ++i)
	       res.push_back(*res.rbegin()+1);
	       
	   for (int i=0; i<n-(a+b)-firstCount; ++i)
	       res.push_back(1);
	       
	   copy(res.begin(), res.end(), ostream_iterator<int>(cout, " "));
//*/

}}
