#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	   int n = 2;
	   cin >> n;
	   int res = 0;
	   for (int i=1; i<=n; ++i)
	   {
	   	    res += (n-i); //не найденные
	   	    res += (i-1) * (n-i) ; //уже найденные
	   	    ++res; //нашли i кнопку
	   }
	   
    cout << res;
}
