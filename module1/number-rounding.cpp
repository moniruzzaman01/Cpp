#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;

int main(){
    double a=4.1235;
    cout<<setprecision(3)<<a<<endl;
    cout<<setprecision(3)<<fixed<<a<<endl;
    
    return 0;
}