#include<iostream>
using namespace std;
#include<cmath>
int main()
{
    int a,b,lhs,rhs;

    cout<<"Enter a and b : ";
    cin>>a>>b;
    lhs=pow(a+b,2);
    rhs=pow(a,2)+2*(a*b)+pow(b,2);
    cout<<"the Left Hand Side is : "<<lhs;
    cout<<"\nthe Right Hand Side is : "<<rhs;

}
