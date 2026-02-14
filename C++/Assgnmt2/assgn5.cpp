#include<iostream>
using namespace std;

int main()
{
    int phy[3] ,chem[3],maths[3];

  int l,i,j,k;

    cout<<"Enter student marks";
    for(i=0;i<=2;i++){
    cin>>phy[i]>>chem[j]>>maths[k];
    }



    for(l=0;l<=2; l++){

            i=l;
            j=l;
            k=l;

    cout<<" Phy: "<<phy[i]<<" Chem: "<<chem[j]<<" maths: "<<maths[k];
    }


 //calculator(&phy,&chem,&maths,&s_per);

    //cout<<"The percentage is : "<<s_per;


}

