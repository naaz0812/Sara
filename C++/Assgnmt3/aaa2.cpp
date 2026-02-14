#include<iostream>
using namespace std;
int main()
{
    int numb;
    cout<<"Enter a Number: ";
    cin>>numb;
    cout<<"\n";
    if(numb%2==0)
    {
        cout<<"Even Number"<<endl;
    }
    else if(numb%2!=0)
    {
        cout<<"Odd Number"<<endl;
    }
else
{
    cout<<"Wrong Input"<<endl;
}
}
