#include<iostream>
using namespace std;
int main()
{
    int numb;
    cout<<"Enter a Number: ";
    cin>>numb;
    cout<<"\n";
    if(numb%5==0)
    {
        cout<<"Yes! it is divisible with 5."<<endl;
    }
    else if(numb%5!=0)
    {
        cout<<"No! it is not divisible with 5."<<endl;
    }
else
{
    cout<<"Wrong Input"<<endl;
}
}
