#include<iostream>
using namespace std;
class student
{

    int roll;
    int age;

public:
    void input()
    {
        cout<<"Enter first stud roll";
        cin>>roll;
        cout<< "Enter first stud age";
        cin>>age;

    }

    void add(int &x,int &y,int &z,int &p,int &q,int &r)
    {


        x=y+z;

        p=q+r;

    }

    void disp()
    {
        cout<<"roll: "<<roll<<endl;
        cout<<"age: "<<age<<endl;

    }
};

int main()
{
    student s1,s2, s3;

    s1.input();
    s2.input();

    //s3.add(s3.roll,s1.roll,s2.roll,s3.age,s1.age,s2.age);
    cout<<endl;
    s1.disp();
    cout<<endl;
    s2.disp();
    cout<<endl;
    s3.disp();
    cout<<endl;




}
