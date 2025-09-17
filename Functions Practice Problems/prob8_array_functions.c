#include <stdio.h>

// Function prototypes
void displayArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
float calculateAverage(int arr[], int size);
int linearSearch(int arr[], int size, int key);
void sortArray(int arr[], int size);

int main() {
    int n, choice, key, result;
    
    printf("=== Array Functions Demo ===\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    do {
        printf("\n=== Array Operations Menu ===\n");
        printf("1. Display array\n");
        printf("2. Find maximum element\n");
        printf("3. Find minimum element\n");
        printf("4. Calculate average\n");
        printf("5. Search for an element\n");
        printf("6. Sort array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Array elements: ");
                displayArray(arr, n);
                break;
                
            case 2:
                result = findMax(arr, n);
                printf("Maximum element: %d\n", result);
                break;
                
            case 3:
                result = findMin(arr, n);
                printf("Minimum element: %d\n", result);
                break;
                
            case 4:
                printf("Average: %.2f\n", calculateAverage(arr, n));
                break;
                
            case 5:
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = linearSearch(arr, n, key);
                if(result != -1) {
                    printf("Element %d found at position %d\n", key, result + 1);
                } else {
                    printf("Element %d not found in array\n", key);
                }
                break;
                
            case 6:
                sortArray(arr, n);
                printf("Array sorted successfully!\n");
                break;
                
            case 7:
                printf("Goodbye!\n");
                break;
                
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 7);
    
    return 0;
}

void displayArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1; // Element not found
}

void sortArray(int arr[], int size) {
    // Bubble sort implementation
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}