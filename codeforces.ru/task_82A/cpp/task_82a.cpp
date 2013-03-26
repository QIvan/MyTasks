#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	   long n = 1802;
	   cin >> n;
	  long remainder = n;
	   
	   int power = 0;
	   while ( pow(2, power) * 5 < remainder)
	   {
	       ++power;
	       remainder -= pow(2, power-1) * 5;
	   }
	   //cout << "r " << remainder << endl;
	   //cout << "pow " << power << endl;
	   int numMan = 1;
	   while ( pow(2, power) < remainder )
	   {
	   	    remainder -= pow(2, power) ;
	   	    //cout << "r " << remainder << endl;
	   	    ++numMan;
	   }

	   switch ( numMan )
	   {
	   	    case 1: cout << "Sheldon";
	   	            break;
	   	    case 2: cout << "Leonard";
	   	            break;
	   	    case 3: cout << "Penny";
	   	            break;
	   	    case 4: cout << "Rajesh" ;
	   	            break;
	   	    case 5: cout << "Howard" ;
	   	            break;
	   }

}
