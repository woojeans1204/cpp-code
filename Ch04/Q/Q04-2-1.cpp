#include <iostream>
using namespace std;

class Point {
    private:
        int xpos, ypos;
    public:
        void Init(int x, int y) {
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
        void Init(int cx, int cy, int cr) {
            center.Init(cx, cy);
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
        void Init(int icx, int icy, int icr, int ocx, int ocy, int ocr) {
            ic.Init(icx, icy, icr);
            oc.Init(ocx, ocy, ocr);
        }
        void ShowRingInfo() const {
            cout << "Inner Circle Info...\n";
            ic.ShowCircleInfo();
            cout << "Outter Circle Info...\n";
            oc.ShowCircleInfo();
        }
};

int main() {
    Ring ring;
    ring.Init(1, 1, 4, 2, 2, 9);
    ring.ShowRingInfo();
    return 0;
}