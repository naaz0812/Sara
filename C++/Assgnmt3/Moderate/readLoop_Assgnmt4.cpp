#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";

    while(a<=n){
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;

    }

    return 0;
}
