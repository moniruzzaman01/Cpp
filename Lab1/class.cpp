#include <iostream>
using namespace std;

class Students {
    public:
        string name;
        int std_id;
        int age;
        string f_name;
        string m_name;

    void print(){
        cout << "Name:" << name << endl;
        cout << "StudentId:" << std_id << endl;
        cout << "Age:" << age << endl;
        cout << "F_Name:" << f_name << endl;
        cout << "M_Name:" << m_name << endl;
    }
};
class Rectangle{
    public:
        int height;
        int width;
    void area(){
        cout << "Area of rectangle:" << (2 * height * width);
    }
};

int main()
{
    /*code*/
    Students s;
    s.name = "Monriuzzaman";
    s.std_id = 2002232;
    s.age = 12;
    s.f_name = "Kamruzzaman";
    s.m_name = "Shalma khatun";
    s.print();

    cout << endl;
    
    Rectangle r;
    r.height = 2;
    r.width = 2;
    r.area();

    return 0;
}