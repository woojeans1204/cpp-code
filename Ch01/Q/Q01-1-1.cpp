#include <iostream>

int main() {
    int sum = 0, tmp;
    for (int i = 0; i < 5; i++) {
        std::cout << i+1 << "번째 정수 입력: ";
        std::cin >> tmp;
        sum += tmp;
    }
    std::cout << "합계: " << sum;
}