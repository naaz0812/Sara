#include<iostream>
using namespace std;
int main(){

   int i, n,fact=1;
   cout<<"Enter a number: ";
   cin>>n;

   for(i=1;i<=n;i++){
    fact*=i;
   }
   cout<<"The Factorial of "<<n<<" is : "<<fact<<endl;
}





