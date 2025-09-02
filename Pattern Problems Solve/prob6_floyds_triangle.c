#include <stdio.h>

int main(){
    int i, j, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printf("\nFloyd's Triangle Pattern:\n");
    int num = 1;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    
    return 0;
}