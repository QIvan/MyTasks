#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;

class Shell
{
public:
    Shell()
    { }
    void cd(string path)
    {
    	    istringstream ss(path);
    	    string dir;
    	    do
    	    { 
    	        getline(ss, dir, '/');
    	        if (dir.empty())
    	        {
    	            m_pwd.resize(0);
    	            	continue;
    	        }
    	        if (dir != "..")
    	            m_pwd.push_back(dir);
    	        	else
    	        	    m_pwd.pop_back();
    	    }while (!ss.eof());
    }
    
    void pwd()
    {
        cout << '/';
        copy(m_pwd.begin(), m_pwd.end(),
             ostream_iterator<string>(cout, "/"));
    	    cout << endl;
    }
private:
    list<string> m_pwd;
};

int main()
{
    int n = 4;
    cin >> n;
    vector<string> v(n);
    getline(cin, v[0]);
    for (int i=0; i<n; ++i)
        getline(cin, v[i]);
    /*v.push_back("cd /a/b/5/../g");
    v.push_back("cd  /d/../c");
    v.push_back("cd  p/5/../h");
    v.push_back("pwd");*/
    
    Shell shell;
    for (int i=0; i<n; ++i)
    {
        istringstream ss(v[i]);
        string command;
        ss >> command;
        if (command == "pwd")
            shell.pwd();
        else
        {
        	    string path;
        	    ss >> path;
        	    shell.cd(path);
        }
    }
    return 0;
}