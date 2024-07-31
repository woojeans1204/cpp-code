#include <iostream>
using namespace std;

class Rectangle {
    protected:
        int garo, sero;
    public:
        Rectangle(int g, int s) :garo(g), sero(s) {
        
        }
        void ShowAreaInfo() {
            cout << "면적: " << garo * sero << endl;
        }
};

class Square : public Rectangle {
    public:
        Square(int d) :Rectangle(d, d) {

        }
};

int main() {
    Rectangle rec(4, 3);
    rec.ShowAreaInfo();
    
    Square sqr(7);
    sqr.ShowAreaInfo();
    return 0;
}