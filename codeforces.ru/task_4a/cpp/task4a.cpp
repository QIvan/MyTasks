#include <iostream>
int main ()
{
    auto w = 2;
    std::cin >> w;
    bool res = (w % 2 == 0) && (w!=2);
    std::cout << (res ? "YES" : "NO");
	    
	
}
