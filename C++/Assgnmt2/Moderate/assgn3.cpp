#include<iostream>
using namespace std;
int main()
{
int numb1,numb2,numb3;
cout<<"Enter three numbers: ";
cin>>numb1>>numb2>>numb3;
if(numb1>numb2){
        if(numb1>numb3){
    cout<<numb1<<" is the greatest number"<<endl;
}
}
else if(numb2>numb3){
     cout<<numb2<<" is the greatest number"<<endl;
}

else {
       cout<<numb3<<" is the greatest number"<<endl;
}
}

