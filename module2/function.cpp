#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

string addString(string a, string b)
{
    return a+" "+b;
}

void swapNumber(int a, int b)
{
    int x = a;
    a = b;
    b = x;
    cout << a << " " << b << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int result = add(5, 4);
    cout << result << endl;
    string result2 = addString("My name is", "Shakib");
    cout << result2 << endl;
    swapNumber(5, 6);
    return 0;
}
