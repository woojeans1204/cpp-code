#include <iostream>
using namespace std;

typedef struct __Point {
    int xpos;
    int ypos;
} Point;

Point &PntAdder(const Point &p1, const Point &p2) {
    Point *res = new Point;
    res->xpos = p1.xpos + p2.xpos;
    res->ypos = p1.ypos + p2.ypos;
    return *res;
}

int main() {
    Point *first = new Point;
    first->xpos = 3, first->ypos = 4; // (3, 4)
    Point *second = new Point;
    second->xpos = 5, second->ypos = 1; // (5, 1)

    Point &ans = PntAdder(*first, *second);
    cout << "덧셈 결과: (" << ans.xpos << ", " << ans.ypos << ")" << endl;
    delete first;
    delete second;
    delete &ans;
}