#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "forloop" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    cout << "while loop" << endl;
    int j = 0;
    while (j < 10)
    {
        /* code */
        cout << j << endl;
        j++;
    }
    cout << "do while loop" << endl;
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k < 10);

    return 0;
}
