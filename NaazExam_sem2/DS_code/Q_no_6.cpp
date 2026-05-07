#include<iostream>
using namespace std;
struct time{
    int hours, minutes,second;
};
int main(){

struct time t1,t2, sum;

cout<<"Enter time in Hours Minutes and seconds: ";
cin>>t1.hours>>t1.minutes>>t1.second;

cout<<"Enter time in Hours Minutes and seconds: ";
cin>>t2.hours>>t2.minutes>>t2.second;

sum.second=t1.second+t2.second;

sum.minutes=t1.minutes+t2.minutes+(sum.second/60);
sum.second=sum.second%60;

sum.hours=t1.hours+t2.hours+(sum.minutes/60);
sum.minutes=sum.minutes%60;
cout<<"Sum of time is-- " <<endl;
cout<<sum.hours<<":"<<sum.minutes<<":"<<sum.second<<endl;

}
