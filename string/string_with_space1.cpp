#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin >> age;
    cout << age << endl;
    cin.ignore(); //working
    // getchar(); //working
    string name;
    getline(cin, name);
    cout << name << endl;

    return 0;
}