#include <stdio.h>

int main(){
    int i, j, k, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printf("\nNumber Pyramid Pattern:\n");
    for(i = 1; i <= n; i++){
        // Print spaces
        for(k = 1; k <= n-i; k++){
            printf(" ");
        }
        // Print numbers
        for(j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}