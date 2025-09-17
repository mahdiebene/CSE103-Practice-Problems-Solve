#include <stdio.h>
#include <stdbool.h>

// Function prototypes
bool isPrime(int n);
void checkPrimeInRange(int start, int end);

int main() {
    int choice, number, start, end;
    
    printf("=== Prime Number Checker using Functions ===\n");
    printf("1. Check single number\n");
    printf("2. Check range of numbers\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &number);
            if (isPrime(number)) {
                printf("%d is a prime number.\n", number);
            } else {
                printf("%d is not a prime number.\n", number);
            }
            break;
            
        case 2:
            printf("Enter start and end of range: ");
            scanf("%d %d", &start, &end);
            printf("Prime numbers between %d and %d:\n", start, end);
            checkPrimeInRange(start, end);
            break;
            
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

// Function to check and print prime numbers in a range
void checkPrimeInRange(int start, int end) {
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            count++;
            if (count % 10 == 0) printf("\n"); // New line after every 10 numbers
        }
    }
    if (count % 10 != 0) printf("\n");
    printf("Total prime numbers found: %d\n", count);
}