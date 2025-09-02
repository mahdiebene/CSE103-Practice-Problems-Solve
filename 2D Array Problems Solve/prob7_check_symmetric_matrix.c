#include <stdio.h>

int main(){
    int matrix[10][10];
    int i, j, n, is_symmetric = 1;
    
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
    
    // Check if matrix is symmetric
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(matrix[i][j] != matrix[j][i]){
                is_symmetric = 0;
                break;
            }
        }
        if(!is_symmetric){
            break;
        }
    }
    
    if(is_symmetric){
        printf("\nThe matrix is symmetric\n");
    }
    else{
        printf("\nThe matrix is not symmetric\n");
    }
    
    return 0;
}