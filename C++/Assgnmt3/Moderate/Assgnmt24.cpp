#include<iostream>
using namespace std;

int main() {
    int num, rem;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Reverse = ";

    while(num > 0) {
        rem = num % 10;

        cout << rem;

        num = num / 10;
    }

    return 0;
}
