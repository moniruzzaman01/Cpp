#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    /*code*/
    vector<int> a;
    for (int i = 9; i>=0;i--)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < 10;i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    sort(a.begin(),a.end());
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}