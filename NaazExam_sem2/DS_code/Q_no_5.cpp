#include<iostream>
using namespace std;
struct complex{
    int real,imag;
};
int main(){
    struct complex c1,c2, sum;
    cout<<"Enter first two complex number: ";
    cin>>c1.real;
    cin>>c1.imag;
    cout<<"Enter 2 two complex number: ";
    cin>>c2.real;
    cin>>c2.imag;

    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;

    cout<<"The sum = "<<sum.real<<"+"<<sum.imag<<"i"<<endl;


}
