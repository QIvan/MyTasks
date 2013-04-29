#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    bool isEnd = false;
    do
    { 
        int i = 1;
    	    for (int i=1; i<=n; ++i)
    	    {
    	    	    if (m < i)
    	    	    {
    	    	        isEnd = true;
    	    	        	break;
    	    	    }
    	    	    m -= i;
    	    	    //cout << i << " " << m << endl;
    	    } 
    } while (!isEnd);
    cout << m;
    return 0;
}