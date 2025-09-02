#include <stdio.h>

int main(){
    int i, j, k, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printf("\nStar Pyramid Pattern:\n");
    for(i = 1; i <= n; i++){
        // Print spaces
        for(k = 1; k <= n-i; k++){
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}