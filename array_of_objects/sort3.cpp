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
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if(st_array[i].roll>st_array[j].roll){
                Student x;
                x = st_array[i];
                st_array[i] = st_array[j];
                st_array[j] = x;
            }
        }
    }
        for (int i = 0; i < 3; i++)
        {
            st_array[i].display();
        }

    return 0;
}