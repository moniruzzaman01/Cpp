#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int std_id;
        int age;
    Student(string name, int std_id, int age){
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }
    void printInfo(){
        cout << "Name:" << name << " StdId:" << std_id << " Age:" << age << endl;
    }
    // Working
    // bool operator < (const Student& a) const {
    // return std_id > a.std_id;
    // }
    // not working
    bool operator < (Student a){
        return std_id > a.std_id;
    }
};
bool compare(Student a, Student b){
    return a.std_id > b.std_id;
}

int main()
{
    /*code*/
    vector<Student> x;
    for (int i = 0; i < 10; i++)
    {
        x.push_back(Student("Shakib", 2002232 + i, 20));
    }
    for (int i = 0; i < 10; i++)
    {
        x[i].printInfo();
    }
    cout << endl;
    sort(x.begin(), x.end(),compare);
    for (int i = 0; i < 10; i++)
    {
        x[i].printInfo();
    }

        return 0;
}