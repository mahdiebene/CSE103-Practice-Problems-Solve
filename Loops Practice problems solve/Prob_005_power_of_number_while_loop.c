#include <stdio.h>
int main(){
    int b, ex, i, result = 1;
    printf("Enter base: ");
    scanf("%d", &b);
    printf("Enter exponent: ");
    scanf("%d", &ex);

    while(ex > 0){
        result *= b;
        ex--;
    }
    printf("Power = %d", result);

    return 0;
}
