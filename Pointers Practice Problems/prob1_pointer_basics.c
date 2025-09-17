#include <stdio.h>

int main() {
    printf("=== Pointer Basics Demo ===\n\n");
    
    // Basic variable and pointer declarations
    int number = 42;
    int *ptr;
    
    // Assign address of number to pointer
    ptr = &number;
    
    // Display variable information
    printf("Variable 'number' details:\n");
    printf("Value: %d\n", number);
    printf("Address: %p\n", (void*)&number);
    printf("Size: %lu bytes\n\n", sizeof(number));
    
    // Display pointer information
    printf("Pointer 'ptr' details:\n");
    printf("Pointer value (address it points to): %p\n", (void*)ptr);
    printf("Value at the address (dereferenced): %d\n", *ptr);
    printf("Pointer's own address: %p\n", (void*)&ptr);
    printf("Size of pointer: %lu bytes\n\n", sizeof(ptr));
    
    // Modify value through pointer
    printf("Modifying value through pointer...\n");
    *ptr = 100;
    printf("New value of 'number': %d\n", number);
    printf("Value through pointer: %d\n", *ptr);
    
    // Different data types with pointers
    float decimal = 3.14f;
    float *float_ptr = &decimal;
    char letter = 'A';
    char *char_ptr = &letter;
    
    printf("\nOther data types with pointers:\n");
    printf("Float value: %.2f, Address: %p\n", *float_ptr, (void*)float_ptr);
    printf("Char value: %c, Address: %p\n", *char_ptr, (void*)char_ptr);
    
    return 0;
}