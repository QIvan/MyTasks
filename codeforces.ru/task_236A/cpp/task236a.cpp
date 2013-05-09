#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() 
{
	   string name;
	   cin >> name;
	   
    sort(name.begin(), name.end());
	   string::iterator it = unique(name.begin(), name.end());
	   if (distance(name.begin(), it) % 2 == 0)
	       cout << "CHAT WITH HER!";
	   else
	       cout << "IGNORE HIM!";
}
