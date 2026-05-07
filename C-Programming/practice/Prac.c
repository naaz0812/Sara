#include<stdio.h>
int main(){
    float radius,perimeter,area;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    printf("Perimeter of the circle is = %f", perimeter);
    printf("\nArea of the circle is = %f", area);
    return (0);
}
