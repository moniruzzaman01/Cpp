#include <bits/stdc++.h>
using namespace std;

void fun(string s)
{
    stringstream ss(s);
    string word;
    ss >> word;
    cout << word << endl;
}

int main()
{
    string sentence;
    getline(cin, sentence);
    cout << sentence << endl;
    sentence.pop_back();
    cout << sentence << endl;

    return 0;
}