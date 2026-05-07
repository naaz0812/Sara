#include<iostream>
//#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
bool isPrime=true;

if(n<=1){
    isPrime=false;
}

else{

    for(int i=2; i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
}

if(isPrime==true){
    cout<<"Is a Prime Number!";
}


    else{
        cout<<"Is not a Prime Number!";

    }
}

