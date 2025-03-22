#include <stdio.h> 
#include <math.h> 
int main() { 
 
    int num, original, remainder, n = 0, sum = 0; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    original = num; 
 
    while (num != 0) { 
        num /= 10; 
        ++n; 
    } 
    num = original; 
    while (num != 0) { 
        remainder = num % 10; 
        sum += pow(remainder, n); 
        num /= 10; 
    } 
    if (sum == original) { 
        printf("%d is an Armstrong number.\n", original); 
    } else { 
        printf("%d is not an Armstrong number.\n", original); 
    } 
    return 0; 
}
