#include<stdio.h>
int main(){
    float centigrade, fahrenheit;
    printf("Enter temperature in centigrade-- ");
    scanf("%f", &centigrade);
    fahrenheit= (9*centigrade)/5+32;
    printf("The value of entered temperature in fahrenheit is: %f", fahrenheit);

return 0;
}

