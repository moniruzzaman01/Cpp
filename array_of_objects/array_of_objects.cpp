#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
    void display(){
        cout << name << " " << roll << endl;
    }
};

int main()
{
    Student shakib;
    shakib.name = "shakib";
    shakib.roll = 20;
    shakib.display();

    Student ar[2];
    ar[0].name = "rakib";
    ar[0].roll = 30;
    ar[1].name = "Monir";
    ar[1].roll = 40;
    ar[0].display();
    ar[1].display();

    Student ar1[2];
    ar1[0].name = "Kabir";
    ar1[0].roll = 33;
    ar1[1].name = "Kibria";
    ar1[1].roll = 45;
    for (int i = 0; i < 2; i++)
    {
        cout << "name: " << ar1[i].name << endl;
        cout << "roll: " << ar1[i].roll << endl;
    }

    string hello;
    getline(cin, hello);
    cout << hello << endl;
    int x;
    cin >> x;
    cout << x << endl;
    
    cin.ignore();

    string hello1;
    getline(cin, hello1);
    cout << hello1 << endl;
    int x1;
    cin >> x1;
    cout << x1 << endl;

    return 0;
}