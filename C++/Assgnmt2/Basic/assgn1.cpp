#include<iostream>
using namespace std;
int main()
{
    int numb;
    cout<<"Enter a Number: ";
    cin>>numb;
    cout<<"\n";
    if(numb>=0)
    {
        cout<<"Positive Number"<<endl;
    }
    else if(numb<0)
    {
        cout<<"Negative Number"<<endl;
    }
else
{
    cout<<"Wrong Input"<<endl;
}
}
