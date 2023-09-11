#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Shakib";
    cout << name << endl << "type1-> ";

    string::iterator it;
    for (it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << "type2-> ";
    for (string::iterator it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << "type3-> ";
    for (auto it = name.begin(); it < name.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}