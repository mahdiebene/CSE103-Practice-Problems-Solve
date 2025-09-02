#include <stdio.h>

int main(){
    int matrix[10][10];
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
    
    printf("\nMatrix is:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}