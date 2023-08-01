#include <iostream>
using namespace std;

class Students{
    public:
        string name;
        int age;
    Students(string name, int age){
        this->name = name;
        this->age = age;
    }
    void printInfo(){
        cout << "Name:" << name << " " << "Age:" << age << endl;
    }
};

int main()
{
    /*code*/
    Students *s = new Students("shakib", 20);
    s->printInfo();
    (*s).printInfo();

    return 0;
}