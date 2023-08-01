#include <iostream>
using namespace std;

int main()
{
    /*code*/
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if(i%2==0)
        {
            int x = s[i];
            (x == 122) ? x = 96 : x;
            char p = x + 1;
            cout << p;
        }
        else
        {
            cout << s[i];
        }
    }

        return 0;
}