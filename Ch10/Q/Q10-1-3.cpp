#include <iostream>
using namespace std;

class Point {
    private:
        int xpos, ypos;
    public:
        Point(int x = 0, int y = 0) : xpos(x), ypos(y) {

        }
        void ShowPosition() const {
            cout << '[' << xpos << ", " << ypos << ']' << endl;
        }
        friend bool operator==(const Point &r1, const Point &r2);
        friend bool operator!=(const Point &r1, const Point &r2);
};

    bool operator==(const Point &r1, const Point &r2) {
        if(r1.xpos == r2.xpos && r1.ypos == r2.ypos) return true;
        else return false;
    }
    bool operator!=(const Point &r1, const Point &r2) {
        return !(r1==r2);
    }

int main() {
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3(3, 4);
    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();
    cout << (pos1 == pos3) << endl;
    cout << (pos2 != pos3) << endl;
}