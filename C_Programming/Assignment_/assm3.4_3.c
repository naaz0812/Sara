#include<stdio.h>
int main(){

    int months;


    printf("enter a months");
    scanf("%d",&months);

    if(months==1){
        printf("January has 31 days ");

    }else if(months==2){
        printf("February has 28 and 29 days");

    }else if(months==3){
        printf("March has 31 days");

    }else if(months==4){
        printf("April has 30 days");

    }else if(months==5){
        printf("May has 31 days");

    }else if(months==6){
        printf("June has 30 days");

    }else if(months==7){
        printf("July has 31 days");

    }else if(months==8){
        printf("August has 31 days");

    }else if(months==9){
        printf("September has 30 days");

    }else if(months==10){
        printf("October has 31 days");

    }else if(months==11){
        printf("November has 30 days");

    }else if (months==12){
        printf("December has 31 days");

    }else{
       printf("invalid months");
    }





}
