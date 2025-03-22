#include <stdio.h> 
int main() { 
 
    int num1, num2, i, gcd = 1, lcm; 
    printf("Enter first number: "); 
    scanf("%d", &num1); 
    printf("Enter second number: "); 
    scanf("%d", &num2); 
 
    for (i = 1; i <= num1 && i <= num2; i++) { 
        if (num1 % i == 0 && num2 % i == 0) { 
            gcd = i; 
        } 
    } 
    lcm = (num1 * num2) / gcd; 
 
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd); 
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm); 
    return 0; 
}
