#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

typedef list<int> arr;
typedef arr::iterator aiter;
typedef arr::reverse_iterator raiter;

int main()
{
    int n = 7;
    cin >> n;
    //int soldats[] = { 10 ,10 ,58, 31 ,63, 40, 76 };
    arr s(n);
    for (aiter i = s.begin(); i!=s.end(); ++i)
        cin >> *i;
    aiter maxIter = max_element(s.begin(), s.end());
    int result = distance(s.begin(), maxIter);
    
    //for vector
    int temp = *maxIter;
    s.erase(maxIter);
    s.insert(s.begin(), temp);
 
    raiter minIter = min_element(s.rbegin(), s.rend());
    result += distance(s.rbegin(), minIter);
    
    cout << result;
}
