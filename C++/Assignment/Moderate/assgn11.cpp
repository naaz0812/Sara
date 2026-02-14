#include<iostream>
using namespace std;
int main(){
int phy,chem,math,total;
float percentage;

cout<<"Enter marks of three subjects: ";
cin>>phy>>chem>>math;

total=phy+chem+math;
percentage=(total/300.0)*100;
cout<<"Percentage: "<<percentage;
}
