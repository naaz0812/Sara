#include <iostream>
using namespace std;

int main() {
    int n, sum, i, j;
    cout << "Enter value of n: ";
    cin >> n;

    int totalSum = 0;

    for(i = 1; i <= n; i = i + 1) {

            sum = 0;

        for (j = 1; j <= i; j = j + 1) {
            sum += j;
        }
        totalSum += sum;
    }

    cout << "Sum of the series = " << totalSum;

    return 0;

}
