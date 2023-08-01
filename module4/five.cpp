#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*code*/
    int n, m;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    for (int i = 1; i < x.size(); i++)
    {
        if(x[i-1]!=x[i])
        {
            cout << x[i-1] << " ";
        }
        
    }
    cout << x[x.size() - 1];
    return 0;
}