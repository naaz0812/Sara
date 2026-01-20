#include<stdio.h>
int main(){
    float radius, volume,pi=3.14159;
    printf("Enter radius of the circle-- ");
    scanf("%f", &radius);
    volume=(4*pi*radius*radius*radius)/3;
    printf("The volume of sphere is: %f", volume);


return 0;
}
