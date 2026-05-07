#include<iostream>
using namespace std;
int main(){
   int n,i=1,digits=0;
   cout<<"Enter the value of N: ";
   cin>>n;


   while(n>0){
   n=n/10;
   digits=i;
      i++;
}

    cout<<"Total Number of digits are: "<<digits<<endl;
}
