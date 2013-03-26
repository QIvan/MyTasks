#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) 
{
	   while (a && b)
	   {
	       if (a < b)
	           b = b % a;
	       else
	           a = a % b;
	   }
	   return a + b;
}

int main()
{
    int n = 100;
    int a = 1;
    int b = 1;
    cin >> a >> b >> n;
    
    bool isSema = true;
    int currNum = a;
    int remainder = n;
    while (remainder >= 0)
    {
        if (isSema)
            currNum = a;
        else
            currNum = b;
        isSema = !isSema;
    	    remainder -= gcd(remainder, currNum);
        //cout << remainder << endl;
    }
    cout << !isSema;
}
