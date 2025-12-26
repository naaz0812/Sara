#include<stdio.h>
int main(){
float salary,gross,a,h;
printf("Enter the salary\n");
scanf("%f",&salary);
a=0.4;
h=0.2;
gross=salary+a+h;
printf("The Gross Salary is : %f", gross);

return(0);
}
