#include <stdio.h>
#include <math.h>
int main(){
    long long int n, i, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%lld", &n);

    for(i = 1; i <=n; i++){
        sum = sum + pow(i, i);
    }
    printf("The addition of %lld terms of (1+2^2+3^3+...+n^n) series is: %lld",n, sum);


    return 0;
}
