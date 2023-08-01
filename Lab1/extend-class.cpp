#include <iostream>
using namespace std;

class Personal_info{
    public:
        string name;
        string f_name;
        string m_name;
    void print(){
        cout << "Name: " << name << endl;
        cout << "Father's Name: " << f_name << endl;
        cout << "Mother's Name: " << m_name << endl;
    }
};
class Academic_info{
    public:
        string std_id;
        string Class;
        string section;
        Personal_info p;
        void print()
        {
        cout << "Student ID: " << std_id << endl;
        cout << "Class: " << Class << endl;
        cout << "Section: " << section << endl;
        }
};

int main()
{
    /*code*/
        Academic_info a;
        a.std_id = "001";
        a.Class = "Five";
        a.section = "B";
        a.p.name = "Moniruzzaman";
        a.p.f_name = "Kamruzzaman";
        a.p.m_name = "Shalma Khatun";
        a.p.print();
        a.print();

        cout << endl;

        Academic_info b;
        b.std_id = "002";
        b.Class = "Eight";
        b.section = "A";
        b.p.name = "Karim mia";
        b.p.f_name = "Kamal mia";
        b.p.m_name = "Moyna khatun";

        b.p.print();
        b.print();

        return 0;
}