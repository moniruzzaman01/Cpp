#include <iostream>
using namespace std;

namespace test
{
    int x = 10;
} // namespace test

int main(int argc, char const *argv[])
{
    /* code */
    int x = 5;
    cout << "x " << x << endl;//x from line 12
    cout << "x " << test::x << endl;//x from namespace line 6
    return 0;
}
