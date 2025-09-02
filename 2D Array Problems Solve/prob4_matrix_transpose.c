#include <stdio.h>

int main(){
    int matrix[10][10], transpose[10][10];
    int i, j, rows, cols;
    
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
    
    // Calculate transpose
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < cols; i++){
        for(j = 0; j < rows; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}