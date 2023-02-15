#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // concatination
    string a, b, c;
    a = "I love you";
    b = "so much";
    c = a+" "+ b;
    // cout << c << endl;
    //properties
    string x = "education";
    cout << x << endl;
    x.pop_back();//remove last letter
    cout << x << endl;
    x.erase(3,2);//works like slice (starting index,number of elements)
    cout << x << endl;
    return 0;
}
