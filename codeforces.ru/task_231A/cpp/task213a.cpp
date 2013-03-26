#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector< vector<int> > knowTask(n, vector<int>(3) );
    for (int i=0; i<n; ++i)
        cin >> knowTask[i][0] >> knowTask[i][1] >> knowTask[i][2];

    int taskCount = 0;
    for (int i=0; i<n; ++i)
    {
        int sum = 0;
        for (int j=0; j<3; ++j)
            sum += knowTask[i][j];
        if (sum >= 2)
            ++taskCount;
     }
     cout << taskCount;
}
