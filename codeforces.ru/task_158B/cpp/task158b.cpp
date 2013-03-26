#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	   int n = 4;
	   cin >> n;
	   vector<int> groups(n);
	   for (int i=0; i<n; ++i)
	   {
	   	    cin >> groups[i];
	   }
	   
	   int oneGroup = 0;
	   int twoGroup = 0;
	   int threeGroup = 0;
	   int fourGroup = 0;
	   for (int i=0; i<n; ++i)
	   {
	       switch (groups[i])
	       {
	       	    case 1: ++oneGroup;
	       	            break;
	       	    case 2: ++twoGroup;
	       	            break;
	       	    case 3: ++threeGroup;
	       	            break;
	       	    case 4: ++fourGroup;
	       	            break;
	       }
	   }
	   int taxiCount = fourGroup;
	   //cout << taxiCount << endl;
	   taxiCount += (int)twoGroup/2;
	   if (twoGroup%2 != 0)
	   {
	       ++taxiCount;
	   	    for (int i=0; i<2; ++i)
	   	        if (oneGroup != 0)
	   	            --oneGroup;
	   }
	   //cout << taxiCount << endl;
	   while ((threeGroup != 0) && (oneGroup!= 0))
	   {
	   	    --threeGroup;
	   	    --oneGroup;
	   	    ++taxiCount;
	   }
	   if ( threeGroup != 0 )
	       taxiCount += threeGroup;
	   //cout << taxiCount << endl;
	   if (oneGroup != 0)
	   {
	   	    taxiCount += (oneGroup + 3) / 4;
	   }
	   
	   cout << taxiCount;
}
