#include <bits/stdc++.h>
using namespace std;

class Cricketer{
        public:
                int jersey_no;
                char country[50];
};

int main()
{
        Cricketer *dhoni = new Cricketer;
        Cricketer *kohli = new Cricketer;
        
        dhoni->jersey_no = 7;
        char country[50] = "bharat";
        strcpy(dhoni->country, country);

        cout << dhoni->jersey_no << endl;
        cout << dhoni->country << endl;
        
        // kohli = dhoni;//not working
        // *kohli = *dhoni;//working
        kohli->jersey_no = dhoni->jersey_no;
        strcpy(kohli->country, dhoni->country);

        delete dhoni;
        
        cout << kohli->jersey_no << endl;
        cout << kohli->country << endl;

        return 0;
}