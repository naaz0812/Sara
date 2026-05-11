#include<iostream>
using namespace std;
int main(){

int j,i, strt,lst;

cout<<"Enter the Range- staring and ending: ";
cin>>strt>>lst;

for(j=strt; j<=lst; j++){
        bool isPrime=true;
if(j<=1){
    isPrime=false;
}

else{

    for( i=2; i<j;i++){
        if(j%i==0){
            isPrime=false;
        }
    }
}

if(isPrime==true){
    cout<<j<<endl;
}
}
}
