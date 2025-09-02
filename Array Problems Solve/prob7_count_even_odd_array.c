#include <stdio.h>

int main(){
    int arr[10];
    int i, n, count_even = 0, count_odd = 0;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Count even and odd numbers
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    
    printf("Even numbers: ");
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    printf("Odd numbers: ");
    for(i = 0; i < n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    printf("Count of even numbers: %d\n", count_even);
    printf("Count of odd numbers: %d\n", count_odd);
    
    return 0;
}