#include<stdio.h>
int main(){
float d,m,f,i,cm;
printf("Enter the distance between the Cities in kilometers: ");
scanf("%f", &d);

m=d*1000;
f=3.28084*m;
i=f*12;
cm=d*100000;

printf("\n Distance in Meters is : %2f", m);
printf("\n Distance in Feets is : %2f", f);
printf("\n Distance in Inches is : %2f", i);
printf("\n Distance in Centimeters is : %2f\n", cm);

return 0;
}
