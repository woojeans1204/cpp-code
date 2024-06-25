#include <iostream>
using namespace std;

int main() {
    const int num = 12;
    const int *pnum = &num;
    const int &rnum = num;
    cout << "*pnum = " << *pnum << endl;
    cout << "&rnum = " << rnum << endl;
}