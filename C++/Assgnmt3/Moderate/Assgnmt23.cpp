#include<iostream>
using namespace std;

int main() {
    int count = 0, sum = 0, i;

    for(i = 100; i <= 200; i = i + 1) {
        if(i % 9 == 0) {
            count++;
            sum += i;
        }
    }

    cout << "Count = " << count << endl;

    cout << "Sum = " << sum << endl;

    return 0;
}
