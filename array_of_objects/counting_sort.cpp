#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cin >> name;
    int arr[27] = {0};
    string::iterator it;
    for (it = name.begin(); it < name.end();it++)
    {
        int x = *it - 97;
        arr[x]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if(arr[i-'a']>0){
            for (int j = 0; j < arr[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }

    return 0;
}