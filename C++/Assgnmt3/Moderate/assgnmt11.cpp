#include<iostream>
using namespace std;
int main(){
    int  i,n,val=0;

    cout<<"Enter the value of n: ";
    cin>>n;

    for(int k=1;k<=n;k++){
        for(i=1;i<=k/2;i++){
            if(k%i==0){
                val+=i;
            }
        }
        if(val==k){
            cout<<val<<endl;
        }
        val=0;
    }

}
