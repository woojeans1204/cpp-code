#include <iostream>
using namespace std;

template <typename T>
void SwapData(T &t1, T &t2) {
    T tmp;
    tmp = t1;
    t1 = t2;
    t2 = tmp;
}


class Point {
    private:
        int xpos, ypos;
    public:
        Point(int x = 0, int y = 0) : xpos(x), ypos(y) {

        }
        void ShowPosition() const {
            cout << '[' << xpos << ", " << ypos << ']' << endl;
        }
};

int main() { 
    Point p1(3, 2), p2(5, 7);
    p1.ShowPosition();
    p2.ShowPosition();

    cout << "SwapData!\n";
    SwapData(p1, p2);
    p1.ShowPosition();
    p2.ShowPosition();
}