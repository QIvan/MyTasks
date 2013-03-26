#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


bool isCaps(const string& s)
{
    bool result = true;
    if (islower(s[0]) && islower(s[1]))
        return false;
    for (int i=1; i<s.size(); ++i)
        result &= isupper(s[i]);
	   return result;
}

char invertRegister(char ch)
{
	   return islower(ch) ? toupper(ch) : tolower(ch);
}

void changeCaps(string& s)
{
	   transform(s.begin(), s.end(), s.begin(), invertRegister);
}
int main()
{
    string s("lGHH");
    cin >> s;
    //cout << isCaps(s) << endl; 
    //changeCaps(s);
    //cout << s ;
    if (isCaps(s))
        changeCaps(s);
    
    cout << s;
}
