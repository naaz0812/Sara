#include<iostream>
using namespace std;
int main(){
int marks[3][3], tot[3],j,i;
float per[3];
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
    cout<<"\n Total of student"<<i<<"is :" << tot[i]<<"\n";
    }



for(i=0;i<3;i++){
    per[i] = (tot[i]/300.0)*100.00;
    cout<<"\nPercentage of student"<<i<<"is :" << per[i]<<"\n";
}
}
