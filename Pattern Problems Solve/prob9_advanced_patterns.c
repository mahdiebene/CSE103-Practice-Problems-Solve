#include <stdio.h>
#include <stdlib.h>

void printNumberTriangle(int n);
void printFloydTriangle(int n);
void printPascalTriangle(int n);
void printInvertedNumberPyramid(int n);
void printHollowSquare(int n);

int main() {
    int choice, n;
    
    printf("=== Advanced Pattern Generator ===\n\n");
    
    do {
        printf("Select a pattern:\n");
        printf("1. Number Triangle\n");
        printf("2. Floyd's Triangle\n");
        printf("3. Pascal's Triangle\n");
        printf("4. Inverted Number Pyramid\n");
        printf("5. Hollow Square\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);
        
        if(choice >= 1 && choice <= 5) {
            printf("Enter the size/rows: ");
            scanf("%d", &n);
            printf("\n");
        }
        
        switch(choice) {
            case 1:
                printNumberTriangle(n);
                break;
            case 2:
                printFloydTriangle(n);
                break;
            case 3:
                printPascalTriangle(n);
                break;
            case 4:
                printInvertedNumberPyramid(n);
                break;
            case 5:
                printHollowSquare(n);
                break;
            case 6:
                printf("Thank you for using the pattern generator!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
        printf("\n");
        
    } while(choice != 6);
    
    return 0;
}

void printNumberTriangle(int n) {
    printf("Number Triangle Pattern:\n");
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers (ascending)
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print numbers (descending)
        for(int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void printFloydTriangle(int n) {
    printf("Floyd's Triangle Pattern:\n");
    int num = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%3d ", num++);
        }
        printf("\n");
    }
}

void printPascalTriangle(int n) {
    printf("Pascal's Triangle Pattern:\n");
    for(int i = 0; i < n; i++) {
        // Print spaces
        for(int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        int val = 1;
        for(int j = 0; j <= i; j++) {
            printf("%2d", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

void printInvertedNumberPyramid(int n) {
    printf("Inverted Number Pyramid Pattern:\n");
    for(int i = n; i >= 1; i--) {
        // Print spaces
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print numbers
        for(int j = 1; j <= 2 * i - 1; j++) {
            if(j <= i) {
                printf("%d", j);
            } else {
                printf("%d", 2 * i - j);
            }
        }
        printf("\n");
    }
}

void printHollowSquare(int n) {
    printf("Hollow Square Pattern:\n");
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}