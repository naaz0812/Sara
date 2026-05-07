#include<iostream>
using namespace std;
int main(){
    int phy1,chem1,maths1,tot1;
    int phy2,chem2,maths2,tot2;
    int phy3,chem3,maths3,tot3;
    float per1,per2,per3;

    cout<<"Enter student marks";
    cin>>phy1>>chem1>>maths1;

    cout<<"Enter student marks";
    cin>>phy2>>chem2>>maths2;

    cout<<"Enter student marks";
    cin>>phy3>>chem3>>maths3;


    tot1=phy1+chem1+maths1;
    per1=(tot1/300.0)*100;

    tot2=phy2+chem2+maths2;
    per2=(tot2/300.0)*100;

    tot3=phy3+chem3+maths3;
    per3=(tot3/300.0)*100;

    cout<<"\n 1st student total is: "<<tot1<<" and percentage is: "<<per1;

    cout<<"\n 2nd student total is: "<<tot2<<" and percentage is: "<<per2;

    cout<<"\n 3rd student total is: "<<tot3<<" and percentage is: "<<per3;



}
