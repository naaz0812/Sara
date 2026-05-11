#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) {
            cout << "Last prime before " << n << " is: " << i << endl;
            break;
        }
    }

    return 0;
}
