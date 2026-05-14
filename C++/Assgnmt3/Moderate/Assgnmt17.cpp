#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double sum = 0;

    cout << "Enter value of n: ";
    cin >>n;

    for (int i = 1; i <= n; i = i + 1) {

        sum = sum + 1.0 / pow(i, i);
    }

    cout << "Sum = " << sum;

    return 0;

}
