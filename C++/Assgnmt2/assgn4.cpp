#include<iostream>
using namespace std;
int main(){
int marks[3][3], tot[3],j,i;
float per1,per2,per3;
tot[0]=0;
tot[1]=0;
tot[2]=0;
cout<<"Enter marks of all three subjects: ";
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        cin>>marks[i][j];
    }
}

       for(i=0;i<3;i++){
    for(j=0;j<3;j++){
            tot[i]+=marks[i][j];
    }
    }


per1=(tot[0]/300.0)*100;
per2=(tot[1]/300.0)*100;
per3=(tot[2]/300.0)*100;

cout<<"Percentage of student is: "<<per1<<endl;
cout<<"Percentage of student is: "<<per2<<endl;
cout<<"Percentage of student is: "<<per3<<endl;

}
