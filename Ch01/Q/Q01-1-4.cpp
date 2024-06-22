#include <iostream>

int main() {
    double sell, pay;
    while (true) {
        std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin >> sell;
        if (sell == -1) break;
        pay = 50 + sell*0.12;
        std::cout << "이번 달 급여: " << pay << "만원\n";
    }
    std::cout << "프로그램을 종료합니다.\n";
}