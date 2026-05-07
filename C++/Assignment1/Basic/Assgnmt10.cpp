#include<iostream>
using namespace std;
int main(){
    int numb1,numb2, optr, result;
    cout<<"Enter two numbers: ";
    cin>>numb1;
    cin>>numb2;

    cout<<"Menu\n";
    cout<<"1. Addition (+)\n";
    cout<<"2. Difference (-)\n";
    cout<<"3. Multiplication (*)\n";
    cout<<"4. Division (/)\n";

    cout<<"Choose one option\n";
    cin>>optr;

    if(optr==1||"Addition"||'+'){
        result=numb1+numb2;
        cout<<"The sum of both numbers is: "<<result;
    }
    else if(optr==2||"Difference"||'-'){
        result=numb1-numb2;
        cout<<"The Difference of both numbers is: "<<result;
    }
     else if(optr==3||"Multiplication"||'*'){
        result=numb1*numb2;
        cout<<"The Multiplication of both numbers is: "<<result;
    }
     else if(optr==4||"Division"||'/'){
        result=numb1/numb2;
        cout<<"The Division of both numbers is: "<<result;
    }
    else{
        cout<<"Wrong Input";
    }
}
