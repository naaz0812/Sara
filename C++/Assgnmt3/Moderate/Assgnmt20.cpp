#include<iostream>
using namespace std;

int main(){
    int n, fact, i, j;
    float x, sum = 0,term;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter number of terms: ";
    cin >> n;

    for(i = 0; i < n; i = i + 1) {
        fact = 1;
    }

    for(j = 1; j <= 2 * i; j = j + 1) {
        fact = fact * j;
    }

    term = 1;

    for(j = 1; j <= 2 * 1; j = j + 1) {
        term = term * x;
    }

    term = term / fact;

    if(i % 2 == 0){
             sum = sum + term;

    }else{
        sum = sum - term;
    }

    cout << "Sum = " << sum;

    return 0;

}
