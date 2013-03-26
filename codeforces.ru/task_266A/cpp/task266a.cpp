#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void removeDuplicate(string &s, char ch)
{
    string dup(2, ch);
    int pos;
	   while((pos = s.find(dup)) != string::npos)
	       s.erase(pos, 1);
	   
}

int main()
{

	   string s = "hh!";
	   removeDuplicate(s, 'h');
	   cout << s;
	   //cin >> s;
	   
}
