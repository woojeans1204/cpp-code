#include <iostream>

using namespace std;

inline void add_1(int &v) {
    v++;
}

inline void change_sign(int &v) {
    v = -v;
}

int main() {
    int num;
    cin >> num;
    add_1(num);
    cout << "플러스 1: " << num << endl;
    change_sign(num);
    cout << "부호 반전: " << num << endl;
}