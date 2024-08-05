#include <iostream>
using namespace std;

template <typename T>
T SumArray(T arr[], int len) {
    T sum = 0;
    for (int i = 0; i < len; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[] = {3, 2, 1, 6, 5};
    cout << SumArray(arr, 5) << endl;
    
    double brr[] = {4.2, 3.15, 7.29, 4.3, 12.3, -2};
    cout << SumArray(brr, 6) << endl;
}