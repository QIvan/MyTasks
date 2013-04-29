#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline int mix(const vector<int>& m, int pos)
{
	   return m[pos];
}

int main()
{
    int n = 100000;
    int s = 2;//99999;
    int f = 1;
    cin >> n >> s >> f;
    vector<int> m(n+1);
    for (int i=1; i<n+1; ++i)
        cin >> m[i];
    //m[n] = 1;
    if (s == f)
    {
    	    cout << 0;
    	    return 0;
    }
    int pos = mix(m, s);
    int count = 1;
    while((pos != s) && (pos != f))
    {
    	    pos = mix(m, pos);
    	    ++count;
    }
    cout << ((pos == s) ? -1 : count);
}
