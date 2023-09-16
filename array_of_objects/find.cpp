#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int age;
    void display(){
        cout << name << " " << roll << " " << age << endl;
    }
};

int main()
{
    Student st_array[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, st_array[i].name);
        cin >> st_array[i].roll >> st_array[i].age;
        cin.ignore();
    }

    Student max;
    max.age = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if(max.age<st_array[i].age)
            max = st_array[i];
    }
    max.display();

    return 0;
}