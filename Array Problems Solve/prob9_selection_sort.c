#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    printf("=== Array Sorting - Selection Sort ===\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Selection Sort Algorithm
    for(i = 0; i < n-1; i++) {
        int min_idx = i;
        
        // Find minimum element in remaining array
        for(j = i+1; j < n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Swap the found minimum with first element
        if(min_idx != i) {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            
            // Show step by step sorting
            printf("\nStep %d: ", i + 1);
            for(int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
        }
    }
    
    printf("\n\nSorted array (ascending): ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}