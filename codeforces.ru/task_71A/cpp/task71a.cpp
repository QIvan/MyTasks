#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    const int MAX_LENGTH_WORD = 10;
	   int n = 4;
	   cin >> n;
	   vector<string> words(n);
	   for (int i=0; i<n; ++i)
	   {
	   	    cin >> words[i];
	   }
	   for (int i=0; i<n; ++i)
	   {
	   	    if (words[i].size() > MAX_LENGTH_WORD)
	   	        cout << words[i][0] 
	   	             << words[i].size()-2
	   	             << words[i][words[i].size()-1]
	   	             << endl;
	   	    else
	   	        cout << words[i] << endl;
	   }
}
