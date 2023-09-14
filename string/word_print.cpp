#include <bits/stdc++.h>
using namespace std;

void ascending_fun(stringstream& s)
{
    string word;
    if(s>>word)
    {
        cout << word << endl;
        ascending_fun(s);
    }
}
void desscending_fun(stringstream& s)
{
    string word;
    if(s>>word)
    {
        desscending_fun(s);
        cout << word << endl;
    }
}

int main()
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    ascending_fun(ss);
    cout << "-----------" << endl;
    stringstream ss2(sentence);
    desscending_fun(ss2);

    return 0;
}