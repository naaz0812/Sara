#include<iostream>
using namespace std;

void countCalls(){
static int callCount=0;
callCount++;
cout<<"Function called-"<<callCount<<"Time(s)"<<endl;


}

int main(){
countCalls();
countCalls();
countCalls();
return 0;
}
