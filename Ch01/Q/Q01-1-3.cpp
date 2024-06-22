#include <iostream>

int main() {
    int input, i;
    std::cout << "숫자를 하나 입력하세요: ";
    std::cin >> input;

    for (i = 0; i < 9; i++)
        std::cout << input << " X " << i+1 << " = " << input*(i+1) << std::endl;

}