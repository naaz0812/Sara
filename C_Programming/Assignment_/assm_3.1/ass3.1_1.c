#include<stdio.h>
int main()
{
    int year;

    printf("Enter the year: ");
    scanf("%d",&year);


    if(year%400==0)
    {
        printf("The entered year is a leap year\n");
    }
    else if(year%100==0)
    {

        printf("The entered year is not leap year\n");
    }
     else if(year%4==0)
    {
        printf("Entered year is a leap year\n");
    }
    else{
        printf("Not a leap year");
    }


    return 0;
}
