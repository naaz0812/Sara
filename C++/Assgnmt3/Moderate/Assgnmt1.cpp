#include<iostream>
using namespace std;
int main(){

   int rem,n,rev=0,check;
   cout<<"Enter the value of N: ";
   cin>>n;
check=n;

   while(n>0){
      rem=n%10;
   rev=rev*10+rem;
   n=n/10;

}
cout<<"reverse of number is : "<<rev<<endl;


if(rev==check){

    cout<<rev<<" is a Palindrome "<<endl;
}
else{
        cout<<"not a palindrome";
}
}
