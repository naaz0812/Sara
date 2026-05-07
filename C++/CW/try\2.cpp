#include<iostream>
using namespace std;
class student{

   int roll;
   int age;
};

int main(){
 student s1,s2, s3;
cout<<"Enter first stud roll";
cin>>s1.roll;
cout<<"Enter first stud age";
cin>>s1.age;

cout<<"Enter second stud roll";
cin>>s2.roll;
cout<<"Enter second stud age";
cin>>s2.age;

s3.roll=s1.roll+s2.roll;

s3.age=s1.age+s2.age;

cout<<"First_roll: "<<s1.roll<<endl;
cout<<"First_age: "<<s1.age<<endl;


cout<<"second_roll: "<<s2.roll<<endl;
cout<<"second_age: "<<s2.age<<endl;
cout<<"Sum of roll : "<<s3.roll<<endl;
cout<<"Sum of age : "<<s3.age<<endl;






}
