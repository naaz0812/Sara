#include<stdio.h>
int main(){
    float unit,c1,c2,c3,c4;
    printf("enter the electric bill used- ");
    scanf("%f", &unit);

    if(unit<=100){
        c1=100*1;
        printf("%f",c1);
    }
    else if(unit<=200 && unit>100){
        c2=(100*1)+(unit-100)*2;
        printf("%f",c2);
    }
     else if(unit<=300 && unit>200){
        c3=(100*1)+(100*2)+(unit-200)*4;
        printf("%f",c3);
    }
     else if(unit>300){
        c4=(100*1)+(100*2)+(100*4)+(unit-300)*6;
        printf("%f",c4);
    }



return 0;
}
