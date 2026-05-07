#include<iostream>
using namespace std;
void sum(int x[4], int y[4], int *z){
  int i;
    for(i=0;i<4;i++){
        *(z+i)=x[i]+y[i];

    }
}
int main(){


 int a[4],b[4],c[4],i;

 cout<<"Enter 4 value of A: ";
 for(i=0;i<4;i++){
    cin>>a[i];
 }

 cout<<"Enter 4 value of B: ";
 for(i=0;i<4;i++){
    cin>>b[i];
 }

 sum(a,b,&c[0]);

 for(i=0;i<4;i++){
        cout<<endl;
    cout<<c[i]<<endl;
}

}
