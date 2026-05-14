#include<iostream>
using namespace std;

int main() {
    int num, count = 0, max, min, sum = 0;

    cout << "Enter positive numbers (-1 to stop): ";
    cin >> num;

    if(num == -1) {
        cout << "No numbers entered!";
        return 0;
    }

    max = min = num;

    while(num != -1) {
        count++;
        sum += num;

        if(num > max)
            max = num;

        if(num < min)
            min = num;

        cin >> num;
    }

    float avg = (float)sum / count;

    cout << "Count = " << count << endl;

    cout << "Maximum = " << max << endl;

    cout << "Minimum = " << min << endl;

    cout << "Average = " << avg << endl;

    return 0;

}
