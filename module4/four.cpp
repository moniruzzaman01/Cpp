#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*code*/
    int n, m;
    cin >> n;
    vector<int> x;
    vector<int> y;
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
        y.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++)
        {
            if(x[i]==y[j])
            {
                cout << x[i] << " ";
            }
        }
    }

        return 0;
}