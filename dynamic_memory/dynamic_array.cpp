#include <bits/stdc++.h>
using namespace std;

int fun(int *p, int n){
    for (int i = 0; i < n; i++)
    {
        p[i] += 10;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> *(ar + i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    int result = fun(ar, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    return 0;
}