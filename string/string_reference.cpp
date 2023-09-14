#include <bits/stdc++.h>
using namespace std;

void fun(string n){
    n = "Rakib";
    cout << "funcall " << n << endl;
}
void fun1(string & n){
    n = "Rakib";
    cout << "fun1call " << n << endl;
}

int main()
{
    string name = "Shakib";
    fun(name);
    cout << "after fun call " << name << endl;
    fun1(name);
    cout << "after fun1 call " << name << endl;

    return 0;
}