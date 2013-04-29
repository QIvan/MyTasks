#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() 
{
	   long n = 300000;
	   long k = 100000;
	   string road(n, '.');
	   cin >> n >> k;
	   cin >> road;
	   
	   /*for(int i=1; i<k+1; ++i)
	       road[i] = '#';*/
	   
	   bool res = true;
	   int count = 0;
	   for(int i=1; i<n; ++i)
	       if(road[i] == '#')
	       {
	       	    ++count;
	       	    if(count == k)
	       	    {
	       	        res = false;
	       	        	break;
	       	    }
	       }
	       else
	           count = 0;
	  // for(int i=k+1; i<2*k-1; ++i)
	  //     road[i] = '#';    
	  
	   /*if (*road.rbegin() == '#')
	   {
	   	    cout << "NO";
	   	    return 0;
	   }*/
	   //string barrier(k, '#');
	   
	   if(res)//road.find(barrier) == string::npos)
	       cout << "YES";
	   else
	       cout << "NO";
	   
}
