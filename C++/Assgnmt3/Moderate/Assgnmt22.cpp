#include<iostream>
using namespace std;

int main() {
    int n, sum = 0, i;

    cout << "Enter n: ";
    cin >> n;

    for(i = 1; i <= n; i = i + 1) {
        sum = sum + (2 * i - 1);

    }

        cout << "Sum of first " << n << " Odd numbers = " << sum;

        return 0;

}
