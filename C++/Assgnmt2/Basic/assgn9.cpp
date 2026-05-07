#include<iostream>
using namespace std;
int main(){

    int numb;
    cout<<"Enter a number: ";
    cin>>numb;

    if(numb>0){
        cout<<"Positive Number"<<endl;
    }
    else if(numb<0){
        cout<<"Negative Number"<<endl;
    }
    else{
            cout<<"Zero"<<endl;
    }
}

