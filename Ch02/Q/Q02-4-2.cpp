#include <iostream>
#include <ctime> // C에서는 <ctime.h>
#include <cstdlib> // C에서는 <stdlib.h>

using namespace std;

int main() {
    int i, r;
    srand(time(NULL));
    
    cout << "0이상 100미만의 난수 5개를 생성합니다!\n";
    
    for (i = 0; i < 5; i++) {
        r = rand() % 100;
        cout << r << endl;
    }
}