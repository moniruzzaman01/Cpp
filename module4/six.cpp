#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cuboid{
    private:
        int l;
        int w;
        int h;
    public:
    Cuboid(){
        l = 0;
        w = 0;
        h = 0;
    }
    Cuboid(int length, int width, int height){
        l = length;
        w = width;
        h = height;
    }
    float getVolume(){
        return (l * w * h);
    }
    float getSurfaceArea(){
        return (2 * l * w + 2 * l * h + 2 * h * w);
    }
};

int main()
{
    /*code*/
    int n;
    cin >> n;
    vector<Cuboid> x;
    for (int i = 0; i < n; i++)
    {
        x.push_back(Cuboid(i + 2, 4 - i, i + 1));
    }
    for (int i = 0; i < n; i++)
    {
        cout << x[i].getVolume() << " ";
    }

        return 0;
}