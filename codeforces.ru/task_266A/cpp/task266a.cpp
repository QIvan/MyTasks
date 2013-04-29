#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int removeDuplicate(string &s, char ch)
{
    string dup(2, ch);
    int res = 0;
    int pos;
	   while((pos = s.find(dup)) != string::npos)
	   {
	       s.erase(pos, 1);
	       ++res;
	   }
	   return res;
}

int main()
{
    int n;
    cin >> n;
	   string s = "RRG";
	   cin >> s;
	   int result = 0;
	   result += removeDuplicate(s, 'R');
	   result += removeDuplicate(s, 'G');
	   result += removeDuplicate(s, 'B');
	   cout << result;
}
