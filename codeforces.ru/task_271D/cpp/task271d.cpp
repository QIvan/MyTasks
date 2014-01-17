#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <list>
#include <numeric>
#include <set>
#include <algorithm>

using namespace std;

int c = 0;


class Find
{
    int _k;
    string _goodlet;
    set<string> _res;
public:
    Find(int k, string &goodlet)
    {
        _k = k;
    	    _goodlet = goodlet;
    }
    
	   void add(string &s)
	   {
	   ++c;
	       if (true)//s.size() <= _k)
	       {
	           _res.insert(s);
	       	    return;
	       }
        /*if (isBadStr(s))
            _res.insert(s);//*/
	   }
	   bool isBadStr(string &s)
	   {
	   	    return (count_if(s.begin(), s.end(), *this) <= _k);
	   }
	   
	   bool operator()(char ch)
	   {
	   	    return _goodlet.find(ch) == string::npos;
	   }
	   
	   void print()
	   {
	       cout << _res.size();
	   	    set<string>::iterator it = _res.begin();
	   	    for(it; it!=_res.end(); ++it)
	   	        ;//cout << *it << " ";//*/
	   }
};

void print(vector<int> &index, string &data)
{
	       string s;
	       //for (int j=0; j<index.size(); ++j)
        //    s.push_back(data[index[j]]);
        ++c;//cout << s << " ";
}
int main() 
{
set<string> sset;
string q = "";
for (int i=0; i<1500; ++i)
       q.push_back('a' + i%26);
cout << "start" << endl;
for (int i=0; i<15000000; ++i)
{
       sset.insert("123");
       //q.push_back('a');
       }
       cout << "finish";
  return 0;
  string data = "";
    //cin >> data;
    for (int i=0; i<1500; ++i)
       data.push_back('a' + i%26);
       cout << data << endl;
    string letters = "00000000000000000000000000";
    //cin >> letters;
    string goodlet;
    for (int i=0; i<letters.size(); ++i)
        if (letters[i] == '1')
            goodlet.push_back('a' + i);
    int k = 1500;
    //cin >> k;
    Find f(k, goodlet);
    for (int i=0; i<data.size(); ++i)
    {
        string sub;
        sub.resize(data.size()-i);
        sub[0] = data[i];
        f.add(sub);//cout << sub << " ";
        for (int j=i+1; j<data.size(); ++j)
        {
            sub.push_back(data[j]);
            f.add(sub);//cout << sub << " ";
        	
        }
        //f.add(index, data);
    }//*/
    cout << c << endl;
    f.print();
    return 0;
}
