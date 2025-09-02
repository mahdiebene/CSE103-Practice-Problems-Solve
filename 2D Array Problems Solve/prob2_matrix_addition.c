#include <stdio.h>

int main(){
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int i, j, rows, cols;
    
    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);
    
    printf("Enter first matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter second matrix elements:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Add matrices
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    printf("\nFirst Matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSum of Matrices:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}