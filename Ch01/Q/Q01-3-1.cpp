#include <iostream>

int BoxVolume(int length, int width, int height) {
    return length*width*height;
}

int BoxVolume(int length, int width) { // 오버로딩 1
    return length*width*1;
}

int BoxVolume(int length) { // 오버로딩 2
    return length*1*1;
}

int main() {
    std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
    std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
    std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
    // std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
    // 컴파일 에러, 인자 개수가 0개인 함수 오버로딩 존재 X
}