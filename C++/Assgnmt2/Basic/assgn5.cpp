#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;

    cout<<"\n";
    if(age>=18)
    {
        cout<<" The candidate is eligible for Voting "<<endl;
    }
    else if(age<18)
    {
        cout<<" The candidate is not eligible for Voting "<<endl;
    }
else
{
    cout<<"Wrong Input"<<endl;
}
}

