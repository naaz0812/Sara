#include<iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
        cout << "Capital Alphabet";
    else if (ch >= 'a' && ch <= 'z')
        cout << "Small Alphabet";
    else if (ch >= '0' && ch <= '9')
        cout << "Digit";
    else
        cout << "Special Character";


}
