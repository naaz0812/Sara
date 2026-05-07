#include<iostream>
using namespace std;
int main()
{
    int numb1, numb2;
    cout<<"Enter a First Number: ";
    cin>>numb1;
    cout<<"Enter a Second Number: ";
    cin>>numb2;
    cout<<"\n";
    if(numb1>numb2)
    {
        cout<<numb1<<" is the greatest"<<endl;
    }
    else if(numb1<numb2)
    {
        cout<<numb2<<" is the gratest"<<endl;
    }
else
{
    cout<<"Wrong Input"<<endl;
}
}

