#include<iostream>
using namespace std;
int main(){

int year;
cout<<"Enter year: ";
cin>>year;


if(year%400==0){
   cout<<year<<" is a leap year"<<endl;
   }

else if (year%100==0){
    cout<<year<<" is a not leap year"<<endl;
}
else if(year%4==0){
         cout<<year<<" is a leap year"<<endl;
        }
else {
       cout<<" Not a leap year"<<endl;
}
}


