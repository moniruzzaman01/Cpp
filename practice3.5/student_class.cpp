#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;
        Student(const char *n,int r,char s,int m,int c){
            strcpy(name, n);
            roll = r;
            section = s;
            math_marks = m;
            cls = c;
        }
};

int main() {
    Student shakib("shakib", 1, 'A', 90, 12);
    Student rakib("rakibul islam", 2, 'A', 88, 12);
    Student kabir("kabir khan", 3, 'A', 89, 12);

    int a = shakib.math_marks;
    int b = rakib.math_marks;
    int c = kabir.math_marks;

    if (a > b && a > c) {
        cout << shakib.name;
    } else if (b > c) {
        cout << rakib.name;
    } else {
        cout << kabir.name;
    }

    return 0;
}
