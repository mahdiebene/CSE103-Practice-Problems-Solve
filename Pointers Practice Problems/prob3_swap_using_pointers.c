#include <stdio.h>

// Function prototypes
void swapByValue(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int num1, num2;
    
    printf("=== Swap Numbers using Pointers ===\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nOriginal values:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // Demonstrate swap by value (doesn't work)
    printf("\nTrying swap by value...\n");
    swapByValue(num1, num2);
    printf("After swap by value: num1 = %d, num2 = %d\n", num1, num2);
    printf("(Notice: Values remain unchanged)\n");
    
    // Demonstrate swap by reference (works)
    printf("\nTrying swap by reference...\n");
    swapByReference(&num1, &num2);
    printf("After swap by reference: num1 = %d, num2 = %d\n", num1, num2);
    printf("(Notice: Values are successfully swapped)\n");
    
    return 0;
}

// Function that attempts to swap by value (doesn't work)
void swapByValue(int a, int b) {
    printf("Inside swapByValue - Before: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue - After: a = %d, b = %d\n", a, b);
}

// Function that swaps by reference (works)
void swapByReference(int *a, int *b) {
    printf("Inside swapByReference - Before: *a = %d, *b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference - After: *a = %d, *b = %d\n", *a, *b);
}