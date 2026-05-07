#include<iostream>
using namespace std;
int main(){
float unit, bill,x,z,y;
string name;
cout<<"Enter your name";
cin>>name;
cout<<"Enter consumption of electricity";
cin>>unit;
cout<<"Name : "<<name<<endl;
cout<<"Units Consumed : "<<unit<<endl;


if(unit>=0&&unit<=50){
    bill=unit*1.50;
    cout<<"Total Bill:  "<<bill<<"Rs";
}
else if(unit>=51&&unit<=150){
    unit-=50;
    x=50*1.5;
   bill=unit*2.50;
bill+=x;
    cout<<"Total Bill: "<<bill<<"Rs";
}
else if(unit>=151&&unit<=250){
    z=50*1.5;
    x=100*2.5;
      unit-=150;
   bill=unit*4.00;
   bill+=x+z;
    cout<<"Total Bill: "<<bill<<"Rs";
}
else if(unit>250){
        unit-=250;
 z=50*1.5;
    x=100*2.5;
    y=100*4.0;
    bill=unit*6.00;
    bill+=x+y+z;
    cout<<"Total Bill: "<<bill<<"Rs";
}


/*if(unit>=0&&unit<=199){
   bill=unit*1.20;
    cout<<"Total Bill: "<<bill<<"Rs";
}
else if(unit>=200&&unit<=399){
    bill=unit*1.50;
    cout<<"Total Bill: "<<bill<<"Rs";
}
else if(unit>=400&&unit<=599){
    bill=unit*1.80;
    cout<<"Total Bill: "<<bill<<"Rs";
}
else if(unit>600){
   bill=unit*2.00;
    cout<<"Total Bill: "<<bill<<"Rs";
}*/


}

