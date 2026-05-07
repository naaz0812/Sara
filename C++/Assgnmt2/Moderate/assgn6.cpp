#include<iostream>
using namespace std;
int main(){
int numb1,numb2,result;
char opertr;
cout<<"Operator Option- "<<endl;
cout<<"Addition"<<endl;
cout<<"Substraction"<<endl;
cout<<"Multiplication"<<endl;
cout<<"Division"<<endl;

cout<<"Enter 1st number: ";
cin>>numb1;
cout<<"Enter 2nd number: ";
cin>>numb2;
cout<<"Enter Operator";
cin>>opertr;


switch (opertr){
case '+':
    result=numb1+numb2;
    cout<<result;
    break;

case '-':
    result=numb1-numb2;
    cout<<result;
    break;

case '*':
    result=numb1*numb2;
    cout<<result;
    break;


case '/':
    result=numb1/numb2;
    cout<<result;
    break;

default:
    cout<<"Wrong Input";
    }

}

