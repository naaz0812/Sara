#include<iostream>
using namespace std;

int main() {
    int i, j;

    for(i = 5; i >= 1; i = i - 1) {

        for (j = i; j <= 5; j = j + 1) {

            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
