#include <iostream>
using namespace std;

void swapNumber(int a, int b)//here a b is the copy of the actual variable
{
    int x = a;
    a = b;
    b = x;
    cout << "from swapNumber: ";
    cout << a << " " << b << endl;
}

void swapNumberWithMemory(int &a, int &b)//here a b is the actual variable which is passed while funcion is called. it's mean they came with memory or reference
{
    int x = a;
    a = b;
    b = x;
    cout << "fromSwapNumberWithMemory: ";
    cout << a << " " << b << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    int a = 5, b = 6;
    cout << "original: ";
    cout << a << " " << b << endl;
    swapNumber(a,b); //this function make a copy of actual variable and then swap them
    cout << "after function call: ";
    cout << a << " " << b << endl;

    int x = 3, y = 4;
    cout << "original: ";
    cout << x << " " << y << endl;
    swapNumberWithMemory(x,y); //this function take the actual variable and then swap them
    cout << "after function call: ";
    cout << x << " " << y << endl;
    
    return 0;
}
