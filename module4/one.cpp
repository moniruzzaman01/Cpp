#include <iostream>
using namespace std;

int main()
{
    /*code*/
    int n;
    cin >> n;
    int sum = 0;
    while (n--)
    {
        int a;
        cin >> a;
        sum += a;
    }
    cout << sum << endl;

    return 0;
}