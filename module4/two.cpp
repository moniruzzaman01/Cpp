#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*code*/
    int n;
    cin >> n;
    vector<int>x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    int result = 1;
    for (int i = 1; i < n; i += 2)
    {
        result *= x[i];
    }
    cout << result << endl;

    return 0;
}