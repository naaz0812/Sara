#include <stdio.h>
#define PI 3.1416
int main() {
    int choice;
    float radius, length, width, base, height, area;


    printf("Select a shape to calculate its area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

        if (choice == 1) {

        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("Area of the circle = %.2f\n", area);
    }
    else if (choice == 2) {

        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of the rectangle = %.2f\n", area);
    }
    else if (choice == 3) {

        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of the triangle = %.2f\n", area);
    }
    else {

        printf("Error: Invalid choice! Please select a valid option (1-3).\n");
    }

    return 0;
}
