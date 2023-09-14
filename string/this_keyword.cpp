#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int age;
        Student(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void show(){
            cout << name << " " << age << endl;
        }
};

int main()
{
        Student shakib("Shakib", 22);
        shakib.show();

        return 0;
}