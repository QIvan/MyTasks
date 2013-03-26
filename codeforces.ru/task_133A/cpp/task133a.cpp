#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	   string s = "HI!";
	   cin >> s;
	   int find[] = {s.find('H'), s.find('Q'), s.find('9') };
    int res = *max_element(find , find +3);
    cout << (res != string::npos ? "YES" : "NO");
}
