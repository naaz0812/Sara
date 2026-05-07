#include<iostream>
using namespace std;

float calculator(int *a, int *b, int *c, float *d)
{
    int total;
    total= *a+*b+*c;

    *d= (total/300.0)*100;

}

int main()
{
    int phy,chem,maths;
    float s_per;

    cout<<"Enter student marks";
    cin>>phy>>chem>>maths;
 calculator(&phy,&chem,&maths,&s_per);

    cout<<"The percentage is : "<<s_per;


}


