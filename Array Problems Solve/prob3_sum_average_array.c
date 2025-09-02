#include <stdio.h>

int main(){
    int arr[10];
    int i, n, sum = 0;
    float average;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    average = (float)sum / n;
    
    printf("Array elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    
    return 0;
}