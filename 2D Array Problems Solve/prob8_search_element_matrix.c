#include <stdio.h>

int main(){
    int matrix[10][10];
    int i, j, rows, cols, element, found = 0;
    int row_pos, col_pos;
    
    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Enter element to search: ");
    scanf("%d", &element);
    
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Search for element
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(matrix[i][j] == element){
                found = 1;
                row_pos = i + 1;  // 1-based indexing
                col_pos = j + 1;  // 1-based indexing
                printf("\nElement %d found at position [%d][%d]\n", element, row_pos, col_pos);
            }
        }
    }
    
    if(!found){
        printf("\nElement %d not found in the matrix\n", element);
    }
    
    return 0;
}