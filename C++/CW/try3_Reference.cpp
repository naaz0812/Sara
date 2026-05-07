#include <iostream>
using namespace std;

class student {
public:
    int roll;
    int age;

    void input() {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter Age: ";
        cin >> age;
    }

    void display() {
        cout << "Roll No: " << roll << ", Age: " << age << endl;
    }

    student add(student x,student y){
        student t;
        t.roll=x.roll+y.roll;
        t.age=x.age+y.age;
        return t;
    }
};

int main() {
    student s1, s2,total, s3;

    cout << "Enter details of Student 1:\n";
    s1.input();

    cout << "\nEnter details of Student 2:\n";
    s2.input();

   s3=total.add(s1,s2);

   // int totalRoll = s1.roll + s2.roll;
   // int totalAge = s1.age + s2.age;

    cout << "\n--- Results ---\n";
    cout << "Sum of Roll Numbers: " << s3.roll << endl;
    cout << "Sum of Ages: " << s3.age << endl;

    return 0;
}
