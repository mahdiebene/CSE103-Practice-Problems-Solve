#include <stdio.h>

int main(){
    int i, j, n;
    
    printf("Enter number of rows: ");
    scanf("%d", &n);
    
    printf("\nInverted Star Triangle Pattern:\n");
    for(i = n; i >= 1; i--){
        for(j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}