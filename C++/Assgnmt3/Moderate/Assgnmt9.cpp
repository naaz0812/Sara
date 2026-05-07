#include<iostream>
using namespace std;
int main(){

int i,n;

cout<<"Enter a number";
cin>>n;
for(i=1;i<=n;i++){

        if(i%5==0){
            cout<<i<<" is divisible by 5--hence continued "<<endl;
            continue;
        }

        if(i%10==0){
            cout<<i<<" is divisible by 10--hence breaked"<<endl;
           break;
        }

        cout<<i<<endl;

}




}

