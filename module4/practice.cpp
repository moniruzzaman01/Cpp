#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cuboid{
    private:
        int length;
        int width;
        int height;
    public:
    Cuboid(){

    }
    Cuboid(int length, int width, int height){
        this->length = length;
        this->width = width;
        this->height = height;
    }
    int getVolume(){
        return length * width * height;
    }
    int getSurfaceArea(){
        return 2 * length * (width + 2) * length * (height + 2) * height * width;
    }
    void print(){
        cout << "length:" << length << " width:" << width << " height:" << height;
    }
};

// bool Calc(Cuboid a, Cuboid b){
//     return a.length > b.length;
// }

int main()
{
    /*code*/
    // Cuboid a(2,3,4);
    // a.print();
    // cout << "Volume: " << a.getVolume();

    vector<Cuboid> x;
    for (int i = 0; i < 5; i++)
    {
        x.push_back(Cuboid(i + 2, i + 5, 10 - i));
    }
    // sort(x.begin(), x.end(), Calc);
    for (int i = 0; i < 5; i++)
    {
        x[i].print();
        cout << " Volume:" << x[i].getVolume() << endl;
    }

        return 0;
}