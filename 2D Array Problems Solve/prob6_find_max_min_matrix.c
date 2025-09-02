#include <stdio.h>

int main(){
    int matrix[10][10];
    int i, j, rows, cols, max, min;
    
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
    
    // Initialize max and min with first element
    max = min = matrix[0][0];
    
    // Find maximum and minimum elements
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
            if(matrix[i][j] < min){
                min = matrix[i][j];
            }
        }
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMaximum element in matrix: %d\n", max);
    printf("Minimum element in matrix: %d\n", min);
    
    return 0;
}