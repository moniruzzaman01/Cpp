#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 5;
    int b = a;
    a = 6;
    cout <<"without reference: "<< b << endl;
    
    int x = 3;
    int *y = &x;
    x = 4;
    cout <<"with reference: "<< *y << endl;
    return 0;
}
