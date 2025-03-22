#include <stdio.h>
int main(){
    int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 0; i <=n; i++){
        sum += i;
    }
    printf("The addition of %d terms of (1+2+3+...+n) series is: %d",n, sum);


    return 0;
}
