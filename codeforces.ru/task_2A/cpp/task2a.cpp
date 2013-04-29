#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

typedef map<string,int> tusers;
typedef pair<string,int> tdata;

int mapLess(const tdata &l, const tdata &r) { return l.second < r.second; }
int mapEqual(tdata l, tdata r) { return l.second == r.second; }

class FindMax
{
    const int _max;
    tusers _users;
public:
    FindMax(const int max, tusers users) : _max(max), _users(users){}
    bool operator()(const tdata& elem)
    {
        if (_users.find(elem.first) == _users.end())
            return false;
        _users[elem.first] += elem.second;
        return _users[elem.first] >= _max;
    }
};
int main()
{
    int n = 5;
    cin >> n;
    vector<tdata> data(n);
    for (int i=0; i<n; ++i)
        cin >> data[i].first >> data[i].second;
    /*data[0] = tdata("a", 34);
    data[1] = tdata("a", -34);
    data[2] = tdata("c", 2);
    data[3] = tdata("d", 3);
    data[4] = tdata("c", 1);*/

    tusers users;
    for (int i=0; i<n; ++i)
    {
        users[data[i].first] += data[i].second;
    }
    tdata win = *max_element(users.begin(), users.end(), mapLess);
    int maxCount = count_if(users.begin(), users.end(), bind2nd(ptr_fun(&mapEqual), win));
    if (maxCount != 1)
    { 
        for (tusers::iterator it=users.begin(); it!=users.end();)
            if (it->second != win.second)
                users.erase(it++);
            else
            {
                users[it->first] = 0;
                ++it;
            }
        win = *find_if(data.begin(), data.end(), FindMax (win.second, users));
    }
    cout << win.first;
    return 0;
}