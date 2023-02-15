#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "Enter the length of the array: ";
    int length;
    cin >> length;
    int arr[length];
    cout << "Enter the elements: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    cout << "Your given array is: ";
    for (int i = 0; i < length;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
