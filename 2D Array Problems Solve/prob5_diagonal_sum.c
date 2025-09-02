#include <stdio.h>

int main(){
    int matrix[10][10];
    int i, j, n, sum_main = 0, sum_secondary = 0;
    
    printf("Enter the size of square matrix (max 10): ");
    scanf("%d", &n);
    
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nMatrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Calculate sum of main diagonal (top-left to bottom-right)
    for(i = 0; i < n; i++){
        sum_main += matrix[i][i];
    }
    
    // Calculate sum of secondary diagonal (top-right to bottom-left)
    for(i = 0; i < n; i++){
        sum_secondary += matrix[i][n-1-i];
    }
    
    printf("\nMain diagonal elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", matrix[i][i]);
    }
    printf("\nSum of main diagonal: %d\n", sum_main);
    
    printf("\nSecondary diagonal elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", matrix[i][n-1-i]);
    }
    printf("\nSum of secondary diagonal: %d\n", sum_secondary);
    
    return 0;
}