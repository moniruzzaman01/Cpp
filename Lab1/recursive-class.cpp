#include <iostream>
using namespace std;

class Person{
    public:
        string name;
        Person *father, *mother;
        void print(){
            cout << "Name: " << name << endl;
            cout << "Father's Name: " << father->name << endl;
            cout << "Mother's Name: " << mother->name << endl;
        }
};

int main()
{
    /*code*/
        Person a;
        a.father = new Person;
        a.mother = new Person;
        a.name = "Shakib";
        a.father->name = "Suruj";
        a.mother->name = "Mona";
        a.print();

        return 0;
}