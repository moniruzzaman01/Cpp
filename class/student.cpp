#include <bits/stdc++.h>
using namespace std;

class Triangle{
    public:
        int height;
        int width;
};

int main()
{
    //declaration
    Triangle one;
    //value assign
    one.height = 10;
    one.width = 20;
    //print the value
    cout << one.height << endl
            << one.width << endl;

    return 0;
}