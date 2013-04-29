#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

int isNotZ(char ch) { return ch != 'z'; }

bool isFind(vector<string> &v, string &find)
{
	   for (int i=0; i<v.size(); ++i)
    {
        if (v[i].find(find) != string::npos)
            return true;
    }
    return false;
}

int main()
{
    int n = 30;
    cin >> n;
    vector<string> data(n);
    for (int i=0; i<n; ++i)
    {
        cin >> data[i];
    }
    string find = "a";
    
    for (;;)
    {
    	    if (!isFind(data, find))
    	        break;
    	    
    	    string::reverse_iterator it = find_if(find.rbegin(), find.rend(), isNotZ);
    	    if (it == find.rend())
    	    {
    	    	    fill(find.begin(), find.end(), 'a');
    	        find.push_back('a');
    	        continue;
    	    }   
    	    else
    	    {
    	    	    ++*it;
    	    	    fill(it.base(), find.end(), 'a');
    	    }  	    
    	    
    	    //cout << find << endl;
    }
    cout << find;
    return 0;
}