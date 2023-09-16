#include <bits/stdc++.h>
using namespace std;

class CustomSort{
    public:
        char x;
        int count;
};

bool cmp(CustomSort a, CustomSort b)
{
    return (a.count > b.count) ? true : false;
}

int main()
{
    int n;
    cin >> n;
    CustomSort fre[27];
    for (int i = 0; i < 26; i++)
    {
        fre[i].x = i + 'a';
        fre[i].count = 0;
    }
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        fre[c - 'a'].count++;
    }
    sort(fre, fre + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if(fre[i].count){
            for (int j = 0; j < fre[i].count; j++)
            {
                cout << fre[i].x;
            }
        }
    }

    return 0;
}