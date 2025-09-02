#include <stdio.h>

int main(){
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int i, j, k, rows1, cols1, rows2, cols2;
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);
    
    if(cols1 != rows2){
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }
    
    printf("Enter first matrix elements:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter second matrix elements:\n");
    for(i = 0; i < rows2; i++){
        for(j = 0; j < cols2; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Initialize result matrix
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            result[i][j] = 0;
        }
    }
    
    // Multiply matrices
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            for(k = 0; k < cols1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("\nFirst Matrix:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols1; j++){
            printf("%d\t", matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSecond Matrix:\n");
    for(i = 0; i < rows2; i++){
        for(j = 0; j < cols2; j++){
            printf("%d\t", matrix2[i][j]);
        }
        printf("\n");
    }
    
    printf("\nProduct of Matrices:\n");
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}