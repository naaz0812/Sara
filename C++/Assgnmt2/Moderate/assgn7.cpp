#include<iostream>
using namespace std;
int main(){
int month;

cout<<"Enter Current Month-";
cin>>month;


switch (month){
case 1:
    cout<<"it's January with 31 days"<<endl;
    break;

case 2:
    cout<<"it's February with 28/29 days"<<endl;
    break;


case 3:
    cout<<"it's March with 31 days"<<endl;
    break;



case 4:
    cout<<"it's April 30 days"<<endl;
    break;

case 5:
    cout<<"it's May with 31 days"<<endl;
    break;

case 6:
    cout<<"it's June with 30 days"<<endl;
    break;

case 7:
    cout<<"it's July with 31 days"<<endl;
    break;

case 8:
    cout<<"it's August with 31 days"<<endl;
    break;
case 9:
    cout<<"it's September with 30 days"<<endl;
    break;
case 10:
    cout<<"it's October with 31 days"<<endl;
    break;
case 11:
    cout<<"it's November with 30 days"<<endl;
    break;
case 12:
    cout<<"it's December with 31 days"<<endl;
    break;


default:
    cout<<"Wrong Input"<<endl;
    }

}

