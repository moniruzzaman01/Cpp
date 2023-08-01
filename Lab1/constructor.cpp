#include <iostream>
using namespace std;

class PersonalInfo{
    private://We can't use private info from other scope except this scope
        string name;
        int age;
        string f_name;
        string m_name;
    protected://we can use use protected info from inherited class scope
        string dob;
        string address;
    public:
        void setInfo(string name, string f_name, string m_name,string dob, string address)
        {
            this->name = name;
            this->f_name = f_name;
            this->m_name = m_name;
            this->dob = dob;
            this->address = address;
        }
        void printInfo(){
            cout << "Name: " << name << endl;
            cout << "Father's Name : " << f_name << endl;
            cout << "Mother's Name: " << m_name << endl;
            cout << "DOB: " << dob << endl;
            cout << "Address: " << address << endl;
        }
};
class PersonalInfo1{
    private://We can't use private info from other scope except this scope
        string name;
        int age;
        string f_name;
        string m_name;
    protected://we can use use protected info from inherited class scope
        string dob;
        string address;
    public:
        PersonalInfo1(string name, string f_name, string m_name,string dob, string address)
        {
            this->name = name;
            this->f_name = f_name;
            this->m_name = m_name;
            this->dob = dob;
            this->address = address;
        }
        void printInfo(){
            cout << "Name: " << name << endl;
            cout << "Father's Name : " << f_name << endl;
            cout << "Mother's Name: " << m_name << endl;
            cout << "DOB: " << dob << endl;
            cout << "Address: " << address << endl;
        }
};

int main()
{
    /*code*/
    PersonalInfo p;
    p.setInfo("Shakib", "Suruj", "Shalma", "31/07/2001", "Rangila bazar,Maona,Sreepur,Gazipur");
    p.printInfo();
    
    cout << endl;
    
    PersonalInfo1 q("Shakib", "Suruj", "Shalma", "31/07/2001", "Rangila bazar,Maona,Sreepur,Gazipur");
    q.printInfo();

    return 0;
}