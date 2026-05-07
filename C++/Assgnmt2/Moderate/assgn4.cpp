#include<iostream>
using namespace std;
int main(){

char x1;
cout<<"Enter a character: ";
cin>>x1;
int x = x1;
if(x>=65&&x<=90){
    cout<<"Capital Alphabet";
}
else if(x>=97&&x<=122){
     cout<<"Small Alphabet";
}
else if(x>=49 &&x<=57){
  cout<<"Digit";
}
else {
    cout<<"Special Character";
}
}

