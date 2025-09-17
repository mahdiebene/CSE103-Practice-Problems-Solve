#include <stdio.h>

// Function prototypes
void greetUser();
int addTwoNumbers(int a, int b);
float calculateArea(float radius);

int main() {
    printf("=== Function Basics Demo ===\n\n");
    
    // Call function without parameters
    greetUser();
    
    // Call function with parameters and return value
    int num1 = 10, num2 = 20;
    int sum = addTwoNumbers(num1, num2);
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    
    // Call function with float parameters
    float radius = 5.5;
    float area = calculateArea(radius);
    printf("Area of circle with radius %.2f = %.2f\n", radius, area);
    
    return 0;
}

// Function definition without parameters and return value
void greetUser() {
    printf("Hello! Welcome to Functions in C programming.\n");
    printf("This demonstrates basic function usage.\n\n");
}

// Function definition with parameters and return value
int addTwoNumbers(int a, int b) {
    return a + b;
}

// Function definition with float parameters and return value
float calculateArea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}