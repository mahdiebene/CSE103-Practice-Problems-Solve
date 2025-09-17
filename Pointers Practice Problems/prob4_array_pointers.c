#include <stdio.h>

// Function prototypes
void printArray(int *arr, int size);
void modifyArray(int *arr, int size);
int *findElement(int *arr, int size, int value);
void reverseArray(int *arr, int size);

int main() {
    printf("=== Arrays and Pointers Relationship ===\n\n");
    
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input array elements
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    printArray(arr, size);
    
    // Demonstrate array name as pointer
    printf("\nArray address comparisons:\n");
    printf("Array name (arr): %p\n", (void*)arr);
    printf("Address of first element (&arr[0]): %p\n", (void*)&arr[0]);
    printf("These addresses are the same!\n");
    
    // Demonstrate pointer arithmetic
    printf("\nPointer arithmetic demonstration:\n");
    int *ptr = arr;
    for(int i = 0; i < size; i++) {
        printf("arr[%d] = %d, *(ptr + %d) = %d, Address: %p\n", 
               i, arr[i], i, *(ptr + i), (void*)(ptr + i));
    }
    
    // Modify array through pointer
    printf("\nModifying array through pointer...\n");
    modifyArray(arr, size);
    printf("Modified array: ");
    printArray(arr, size);
    
    // Search for an element using pointer
    int search_value;
    printf("\nEnter value to search: ");
    scanf("%d", &search_value);
    
    int *found = findElement(arr, size, search_value);
    if(found != NULL) {
        printf("Value %d found at address: %p\n", search_value, (void*)found);
        printf("Index: %ld\n", found - arr);
    } else {
        printf("Value %d not found in array\n", search_value);
    }
    
    // Reverse array using pointers
    printf("\nReversing array using pointers...\n");
    reverseArray(arr, size);
    printf("Reversed array: ");
    printArray(arr, size);
    
    return 0;
}

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void modifyArray(int *arr, int size) {
    // Add 10 to each element
    for(int i = 0; i < size; i++) {
        *(arr + i) += 10;
    }
}

int *findElement(int *arr, int size, int value) {
    for(int i = 0; i < size; i++) {
        if(*(arr + i) == value) {
            return arr + i; // Return pointer to the element
        }
    }
    return NULL; // Element not found
}

void reverseArray(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    
    while(start < end) {
        // Swap elements
        int temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}