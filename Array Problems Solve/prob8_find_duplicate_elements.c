#include <stdio.h>

int main(){
    int arr[20];
    int i, n, frequency[100] = {0};  // Assuming numbers are 0-99
    
    printf("Enter the number of elements (max 20): ");
    scanf("%d", &n);
    
    printf("Enter %d elements (0-99): ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        frequency[arr[i]]++;
    }
    
    printf("Array elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("\nFrequency of each element:\n");
    for(i = 0; i < 100; i++){
        if(frequency[i] > 0){
            printf("Element %d appears %d time(s)\n", i, frequency[i]);
        }
    }
    
    printf("\nDuplicate elements: ");
    int found_duplicate = 0;
    for(i = 0; i < 100; i++){
        if(frequency[i] > 1){
            printf("%d ", i);
            found_duplicate = 1;
        }
    }
    if(!found_duplicate){
        printf("None");
    }
    printf("\n");
    
    return 0;
}