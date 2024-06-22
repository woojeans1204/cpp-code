#include <iostream>

using namespace std;

void SwapPointer(int *(&rpt1), int *(&rpt2)) {
    int *tmp = rpt1;
    rpt1 = rpt2;
    rpt2 = tmp;
}

int main() {
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;
    cout << "원래 ptr: " << ptr1 << ", " << ptr2 << endl;
    cout << "값: " << *ptr1 << ", " << *ptr2 << endl;
    SwapPointer(ptr1, ptr2);
    cout << "Swap 된 ptr: " << ptr1 << ", " << ptr2 << endl;
    cout << "값: " << *ptr1 << ", " << *ptr2 << endl;
}