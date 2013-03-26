#include <iostream>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	   string s1("zwe");
	   string s2("qwE");
	   cin >> s1;
	   cin >> s2;
	   
	   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	   
	   //int result = strcmp(s1.c_str(),s2.c_str());
	   //cout << (result == 0 ? 0 : (result / abs(result)));
	   
	   if (s1 < s2)
	       cout << -1;
	   else 
	       if (s1 > s2)
	           cout << 1;
	       else
	           cout << 0;
}
