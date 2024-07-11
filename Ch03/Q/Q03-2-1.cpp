#include <iostream>

using namespace std;

class Calculator {
    private:
        int cnt_a;
        int cnt_s;
        int cnt_m;
        int cnt_d;
    public:
        void Init() {
            cnt_a = 0;
            cnt_s = 0;
            cnt_m = 0;
            cnt_d = 0;
        }
        double Add(double a, double b) {
            cnt_a++;
            return a+b;
        }
        double Min(double a, double b) {
            cnt_s++;
            return a-b;
        }
        double Mul(double a, double b) {
            cnt_m++;
            return a*b;
        }
        double Div(double a, double b) {
            cnt_d++;
            return a/b;
        }
        void ShowOpCount() {
            cout << "덧셈: " << cnt_a;
            cout << " 뺄셈: " << cnt_s;
            cout << " 곱셈: " << cnt_m;
            cout << " 나눗셈: " << cnt_d;
            cout << endl;
        }
};

int main() {
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
    cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
    cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
    cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;

}