#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[6];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int arr2[20];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    delete[] arr; 
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

        return 0;
}