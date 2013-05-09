#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void queueSwap(string &queue)
{
    size_t it = 0;
	   while (it != string::npos)
	   {
	   	    it = queue.find('G', it+1);
	       if(queue[it-1] == 'B')
	       {
	           swap(queue[it-1], queue[it]);
	           ++it;
	       }
	   }
}

int main() 
{
	   int n = 10;
	   int k = 2;
	   string queue;
	   cin >> n >> k;
	   cin >> queue;
	   //queue = "BGGBG";
	   
	   for (int i=0; i<k; ++i)
	       queueSwap(queue);
	   cout << queue;
}
