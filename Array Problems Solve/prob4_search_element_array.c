#include <stdio.h>

int main(){
    int arr[10];
    int i, n, search, found = 0, position;
    
    printf("Enter the number of elements (max 10): ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    for(i = 0; i < n; i++){
        if(arr[i] == search){
            found = 1;
            position = i + 1;  // Position is 1-based
            break;
        }
    }
    
    if(found){
        printf("Element %d found at position %d\n", search, position);
    }
    else{
        printf("Element %d not found in the array\n", search);
    }
    
    return 0;
}