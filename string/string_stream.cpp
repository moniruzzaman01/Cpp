#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    cout << name << endl;

    // stringstream ss;
    // ss << name;
    
    stringstream ss(name);

    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }

        return 0;
}