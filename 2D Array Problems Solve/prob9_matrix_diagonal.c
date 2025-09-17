#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("=== Matrix Diagonal Elements ===\n");
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);
    
    int matrix[n][n];
    
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Display the matrix
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Primary diagonal (top-left to bottom-right)
    printf("\nPrimary Diagonal Elements: ");
    int primary_sum = 0;
    for(i = 0; i < n; i++) {
        printf("%d ", matrix[i][i]);
        primary_sum += matrix[i][i];
    }
    printf("\nSum of primary diagonal: %d\n", primary_sum);
    
    // Secondary diagonal (top-right to bottom-left)
    printf("\nSecondary Diagonal Elements: ");
    int secondary_sum = 0;
    for(i = 0; i < n; i++) {
        printf("%d ", matrix[i][n-1-i]);
        secondary_sum += matrix[i][n-1-i];
    }
    printf("\nSum of secondary diagonal: %d\n", secondary_sum);
    
    // Check if matrix is diagonal matrix
    int is_diagonal = 1;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i != j && matrix[i][j] != 0) {
                is_diagonal = 0;
                break;
            }
        }
        if(!is_diagonal) break;
    }
    
    if(is_diagonal) {
        printf("\nThis is a diagonal matrix.\n");
    } else {
        printf("\nThis is not a diagonal matrix.\n");
    }
    
    return 0;
}