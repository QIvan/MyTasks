#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

string vowels("euioay");
bool del(char ch) { return vowels.find(ch) != string::npos; }

int main()
{
	   string s("YYiiiYYYYqAwfjAAAEEEEEOOOOjffUUUUU");
	   cin >> s;
	   
	   std::transform(s.begin(), s.end(), s.begin(), ::tolower);
	   s.erase(remove_if( s.begin(), s.end(), del), s.end());
	   string::iterator iter = s.begin();
    
    int i = 0;
    while (s[i] != '\0')
    {
        s.insert(i, 1, '.');
        	i += 2;
    }
    cout << s;
}
