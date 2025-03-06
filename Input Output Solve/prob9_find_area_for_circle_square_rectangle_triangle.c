#include <stdio.h>

int main() {
    int choice;
    float area, side, length, breadth, radius, base, height;

    printf("Choose a shape:\n");
    printf("1. Circle\n2. Square\n3. Rectangle\n4. Triangle\n");
    printf("Enter your choice(1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of the circle: ");
            scanf("%f", &radius);
            area = 3.1416 * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter side of the square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square = %.2f\n", area);
            break;
        case 3:
            printf("Enter length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter breadth of the rectangle: ");
            scanf("%f", &breadth);
            area = length * breadth;
            printf("Area of Rectangle = %.2f\n", area);
            break;
        case 4:
            printf("Enter base of the triangle: ");
            scanf("%f", &base);
            printf("Enter height of the triangle: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
