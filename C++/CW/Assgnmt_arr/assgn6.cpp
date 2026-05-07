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
    }

    for(i=0;i<3;i++){
    cout<<tot[i]<<endl;
    }
}

per[0]=(tot[0]/300.0)*100;

/*for(i=0;i<3;i++){
per[i]=(tot[i]/300.0)*100;
cout<<"Percentage of student is: "<<per[3]<<endl;

}

}*/
