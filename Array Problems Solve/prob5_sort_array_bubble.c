#include <stdio.h>

int main(){
    int arr[10];
    int i, j, n, temp;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Original array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Bubble sort in ascending order
    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    printf("Sorted array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}