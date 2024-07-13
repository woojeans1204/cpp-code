#include <iostream>
using namespace std;

class Point {
    private:
        int xpos, ypos;
    public:
        Point(int x, int y) {
            xpos = x;
            ypos = y;
        }
        void ShowPointInfo() const {
            cout << "[" << xpos << ", " << ypos << "]" << endl;
        }
};

class Circle {
    private:
        Point center;
        int r;
    public:
        Circle(int cx, int cy, int cr) :center(cx, cy) {
            r = cr;
        }
        void ShowCircleInfo() const {
            cout << "radius: " << r << endl;
            center.ShowPointInfo();
        }
};

class Ring {
    private:
        Circle ic, oc;
    public:
        Ring(int icx, int icy, int icr, int ocx, int ocy, int ocr) :ic(icx, icy, icr), oc(ocx, ocy, ocr) {
        }
        void ShowRingInfo() const {
            cout << "Inner Circle Info...\n";
            ic.ShowCircleInfo();
            cout << "Outter Circle Info...\n";
            oc.ShowCircleInfo();
        }
};

int main() {
    Ring ring(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}