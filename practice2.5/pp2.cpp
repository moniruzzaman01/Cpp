#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *ar1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar1[i];
    }
    int m;
    cin >> m;
    int *ar2 = new int[m];
    for (int i = 0; i < n; i++)
    {
        ar2[i] = ar1[i];
    }
    for (int i = n; i < m; i++)
    {
        cin >> ar2[i];
    }
    delete[] ar1;
    for (int i = 0; i < m; i++)
    {
        cout << ar2[i] << " ";
    }

    return 0;
}