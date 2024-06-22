#include <iostream>

int SimpleFunc(int a = 10) {
    return a+1;
}

int SimpleFunc(void) {
    return 10;
}

int main() {
    // SimpleFunc();
    // 두 함수의 인자 개수와 종류가 일치, 컴파일 에러! 
}