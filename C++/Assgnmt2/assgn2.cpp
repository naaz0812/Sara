#include<iostream>
using namespace std;

float calculator(int a, int b, int c)
{
    int total;
    total=a+b+c;
    float per;
    per= (total/300.0)*100;
    return per;

}
int main()
{
    int phy,chem,maths;
    float s_per;

    cout<<"Enter student marks";
    cin>>phy>>chem>>maths;
    s_per= calculator(phy,chem,maths);

    cout<<"The percentage is : "<<s_per;


}
