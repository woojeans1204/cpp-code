#include <iostream>
using namespace std;

class Point {
    private:
        int xpos, ypos;
    public:
        Point(int x=0, int y=0) : xpos(x), ypos(y) {
            
        }
    void ShowPosition() const {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }
    Point &operator-() {
        xpos = -xpos;
        ypos = -ypos;
        return *this;
    }
    Point &operator~() {
        int tmp = xpos;
        xpos = ypos;
        ypos = tmp;
    }

};

int main() {
    Point pos(1, 2);
    pos.ShowPosition();
    pos = -pos;
    pos.ShowPosition();
    pos = ~pos;
    pos.ShowPosition();
}