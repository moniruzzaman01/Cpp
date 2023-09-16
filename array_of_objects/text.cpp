#include <bits/stdc++.h>
using namespace std;

int main()
{
    float ar[10] = {3.1, 2.2, 5.1, 4.6, 1.8, 6.4, 8.8, 9, 4};
    float min = INT_MAX;
    for (int i = 0; i < 9; i++)
    {
        if(min>ar[i]){
            min = ar[i];
        }
    }
    float max = INT_MIN;
    for (int i = 0; i < 9; i++)
    {
        if(max<ar[i]){
            max = ar[i];
        }
    }
    cout << min << " " << max;

    return 0;
}