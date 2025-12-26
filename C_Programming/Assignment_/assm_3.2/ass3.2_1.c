#include<stdio.h>
int main(){
    int roll_no,physics,chemistry,maths,total,percentage;
    char name[20];

    printf("Enter your first name");
    scanf("%c",&name[20]);
    printf("Enter your roll no.");
    scanf("%d",&roll_no);
    printf("Enter your physics");
    scanf("%d",&physics);
    printf("Enter your chemistry");
    scanf("%d",&chemistry);
    printf("Enter your maths");
    scanf("%d",&maths);
    total=physics+chemistry+maths;
    percentage= (total/300)*100;

    Printf("%c",name[20]);
    Printf("%d",roll_no);
    Printf("%d",total);
    Printf("%d",percentage);

    if(percentage>=60){
        Printf("First Division!");
    }
    else if(percentage>=50&&percentage<60){
        Printf("Second Division!");
    }
    else if(percentage>=40&&percentage<50){
        Printf("Third Division!");
    }
    else if(percentage<40){
        Printf("Fail!");
    }
    else{
        Printf("Wrong Input!");
    }

return 0;
}
