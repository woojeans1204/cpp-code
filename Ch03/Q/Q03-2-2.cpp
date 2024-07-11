#include <iostream>
#include <cstring>
using namespace std;


class Printer {
    private:
        char data[1000];
    public:
        void SetString(char *str) {
            strcpy(data, str);
        }
        void ShowString() {
            cout << data << endl;
        }
};

int main() {
    Printer pnt;
    pnt.SetString("Hello World!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}