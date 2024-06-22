#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2) {
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}

int main() {
    int val1 = 10;
    int val2 = 20;

    // SwapByRef2(23, 45);
    // 컴파일 에러, int &ref1 = 23, int &ref2 = 45로 초기화
    // reference는 오직 변수로만 초기화 가능, 상수 불가능

    SwapByRef2(val1, val2);
    cout << val1 << endl;
    cout << val2 << endl;
}