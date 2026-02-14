#include<iostream>
using namespace std;
int main()
{
    float gross_s,basic_s, allowance,hra, da;
    cout<<"Enter Basic salary: ";
    cin>>basic_s;
    cout<<"Enter allowance: ";
    cin>>allowance;
    cout<<"Enter HRA: ";
    cin>>hra;
    cout<<"Enter DA: ";
    cin>>da;
    gross_s= basic_s+allowance+hra+da;
    cout<<"The Gross Salary is : "<<gross_s;
}
