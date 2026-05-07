#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,rem[10],finl=0,digit=0,j,i=1;
cout<<"enter N: ";
cin>>n;
j=0;
    while(n>0){
        rem[j]=n%10;
        n=n/10;
        digit=i;
        i++;
        j++;
    }
cout<<"The total no. of digits are: "<<digit<<endl;



for(i=0;i<digit;i++){


     finl+=rem[i];

}

cout<<"The Sum of the digits is: "<<finl<<endl;




}
