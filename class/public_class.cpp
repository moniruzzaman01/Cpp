#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[50];
        int roll;
        //constructor for assigning value
        Student(const char *n, int r)
        {
            strcpy(name, n);
            roll = r;
        }
        //method for showing value
        void show(){
            cout << "Name: " << name << endl;
        }
};

int main()
{
    //declaration
    Student shakib("Moniruzzaman Shakib",10);
    //show value using method
    shakib.show();
    //declaration
    Student rakib("Rakibul Islam", 20);
    //show value using method
    rakib.show();

    return 0;
}