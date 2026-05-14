#include<iostream>
using namespace std;

int main() {
    int i;
    char ch;

    for(i = 1; i <= 5; i = i + 1) {

        for (ch = 'A'; ch < 'A' + i; ch = ch + 1) {

            cout << ch << " ";
        }

        cout << endl;
    }
    return 0;
}
