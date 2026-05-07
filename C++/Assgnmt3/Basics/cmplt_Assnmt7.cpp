#include<iostream>
using namespace std;
int main(){

   int rem,n,rev=0;
   cout<<"Enter the value of N: ";
   cin>>n;


   while(n>0){
      rem=n%10;
   rev=rev*10+rem;
   n=n/10;

}

    cout<<"Total Number of reverse are: "<<rev<<endl;
}
