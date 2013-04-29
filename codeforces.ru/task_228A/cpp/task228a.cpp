#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n = 4;
    list<int> v(n);
    for (list<int>::iterator i=v.begin(); i!=v.end(); ++i)
        cin >> *i;
    v.sort();
    v.unique();
    
    cout << n - v.size();
}