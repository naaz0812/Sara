#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Marks of the student";
    cin>>marks;
    if(marks>=80&&marks<=100){
        cout<<"Grade-A";
    }
    else if(marks>=60&&marks<=79){
        cout<<"Grade-B";
    }
     else if(marks>=40&&marks<=59){
        cout<<"Grade-C";
    }
     else if(marks>=0&&marks<=39){
        cout<<"You are fail";
    }
    else{
        cout<<"Wrong Input";
    }
}

