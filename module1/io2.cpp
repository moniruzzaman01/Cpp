#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream ofstream;//declaration
    ofstream.open("ofOutput.txt");//output file access
    // ifstream<<"I love you";

    ifstream ifstream;//declaration
    ifstream.open("freInput.txt");//input file access
    string x;//variable declaration
    // ifstream>>x;//taking input from file line 11
    getline(ifstream,x);//taking input from file line 11
    ofstream<<x;//storing variable data to new file line 7
    cout<<x<<endl;//terminal output

    
    return 0;
}