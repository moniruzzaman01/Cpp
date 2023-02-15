#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[]={1,2,3,4,5};
    cout << sizeof(arr)/sizeof(int)<<endl;//getting the size of the array

    int arr2[5];
    cout << "Enter 5 input value: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }
    cout << "The output is: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i]<<" ";
    }
    cout << endl;

    return 0;
}
