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

bool cmp(Student a, Student b){
    return (a.name > b.name) ? true : false;
}

int main()
{
    Student st_array[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, st_array[i].name);
        cin >> st_array[i].roll >> st_array[i].age;
        cin.ignore();
    }
    sort(st_array, st_array + 3,cmp);
    for (int i = 0; i < 3; i++)
    {
        st_array[i].display();
    }

    return 0;
}