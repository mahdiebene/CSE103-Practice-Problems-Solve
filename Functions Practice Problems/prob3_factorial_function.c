#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int number;
    
    printf("=== Factorial Calculator using Function ===\n");
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Error! Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d = %d\n", number, result);
    }
    
    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}