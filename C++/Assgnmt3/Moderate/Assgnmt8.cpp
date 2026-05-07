#include<iostream>
using namespace std;
int main(){

int j,i,k;

for(i=1;i<=3;i++){
    for(k=1;k<=3-i;k=k+1){
            cout<<" ";
    }
    for(j=1;j<=i; j++){
        cout<<"* ";

    }
    cout<<endl;
    }
}




