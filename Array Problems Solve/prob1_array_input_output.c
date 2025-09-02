#include <stdio.h>

int main(){
    int arr[10];
    int i, n;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Array elements are: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}