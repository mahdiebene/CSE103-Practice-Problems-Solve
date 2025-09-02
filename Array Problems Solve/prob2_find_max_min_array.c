#include <stdio.h>

int main(){
    int arr[10] = {12, 35, 1, 10, 34, 8, 45, 23, 67, 29};
    int i, max, min;
    int n = 10;
    
    max = min = arr[0];
    
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    
    printf("Array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
    
    return 0;
}