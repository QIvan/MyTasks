#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <math.h>

using namespace std;
typedef vector<int> vtype;
typedef vtype::iterator viter;

int gcd(int a, int b)
{
	   while (a && b)
	       if (a > b)
	           a = a % b;
	       else
	           b = b % a;
	   return a + b;
}

int lcm(int a, int b)
{
	   return a*b / gcd(a,b);
}

int lcm(viter begin, viter end)
{
    if (distance(begin, end) == 2)
        return lcm(*begin, *(begin+1));
    else 
        return lcm(*begin, lcm(begin+1, end));
}

void print( const vtype& ind, const vtype& v )
{
cout << "arr ";
	   for (int i=0; i<ind.size(); ++i)
        cout << v[ind[i]] << ' ';
        cout << endl;
}

int calcLcm( vtype v, vtype index )
{
    if(index.size() == 1)
        return v[index[0]];
        
    vtype vlcm;
	   for (int i=0; i<index.size(); ++i)
	        vlcm.push_back(v[index[i]]);
	   return lcm(vlcm.begin(), vlcm.end());
}

void init(vtype& v )
{
	   for (int i=0; i<v.size(); ++i)
        v[i] = i;
}



// найти индекс стоящий не на конечной позиции
int findIndex(const vtype& v, const vtype& index)
{
	   for (int i=index.size()-1; i>=0; --i)
	   {
	       int endPos = v.size()-1 - (index.size()-1 - i);
	   	    if (index[i] != endPos)
	   	        return i;
	   }
	   return -1;
}
        
int include_exclude(vtype v, int count)
{ 
    int result = 0;
    // получить все сочетания в массиве v
    for (int order=1; order<=v.size(); ++order)
    {
        vtype indexs(order);
        init(indexs);
        
        int currIndex = -1;
        while ((currIndex=findIndex(v, indexs)) != -1)
        { 
            result += pow(-1, order+1) * (int)(count / calcLcm(v, indexs));
            ++indexs[currIndex];
        	    for (int i=currIndex+1; i<indexs.size(); ++i)     
        	        indexs[i] = indexs[i-1]+1;
        	    
        }
        result += pow(-1, order+1) * (int)(count / calcLcm(v, indexs)) ;
    }
    return result;
}

int simple_solution(vtype v, int count)
{
    int result = 0;
	   for (int i=1; i<=count; ++i)
	       for (int j=0; j<v.size(); ++j)
	           if ((i%v[j]) == 0)
	           {
	           	    ++result;
	           	    break;
	           }
    return result;
}

int main()
{
    vector<int> princess(4);
    for (int i=0; i<princess.size(); ++i)
    	    cin >> princess[i];

    int dragons = 24;
    cin >> dragons;
    int result = simple_solution(princess, dragons);
    if (result == include_exclude(princess, dragons))
        cout << result;
    return 0;
}
