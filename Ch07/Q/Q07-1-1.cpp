#include <iostream>

using namespace std;

class Car {
    private:
        int gasolineGauge;
    public:
        Car(int g) : gasolineGauge(g) {
        }
        int GetGasGauge() {
            return gasolineGauge;
        }
};

class HybridCar : public Car {
    private:
        int electricGauge;
    public:
        HybridCar(int g, int e) : Car(g), electricGauge(e) {
        }
        int GetElecGauge() {
            return electricGauge;
        }
};

class HybridWaterCar : public HybridCar {
    private:
        int waterGauge;
    public:
        HybridWaterCar(int g, int e, int w) : HybridCar(g, e), waterGauge(w) {
        }
        void ShowCurrentGauge() {
            cout << "잔여 가솔린: " << GetGasGauge() << endl;
            cout << "잔여 전기량: " << GetElecGauge() << endl;
            cout << "잔여 워터량: " << waterGauge << endl;
        }
};

int main() {
    HybridWaterCar c(80, 40, 5);
    c.ShowCurrentGauge();
}