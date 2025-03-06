#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

// Function prototypes
void clearScreen();
void clearInputBuffer();
int getIntegerInput();
float getFloatInput();
char getCharInput();
void printName();
void basicCalculator();
void calculateAverage();
void displayASCII();
void swapWithTemp();
void swapWithoutTemp();
void calculateSimpleInterest();
void calculateCompoundInterest();
void calculateAreas();
void convertDays();
void returnToMenu();

int main() {
    int choice;

    do {
        clearScreen();
        printf("\n==================================================\n");
        printf("            COMPREHENSIVE C PROGRAM               \n");
        printf("==================================================\n");
        printf("1. Print your name\n");
        printf("2. Basic calculator (add, subtract, multiply, divide)\n");
        printf("3. Calculate average of three numbers\n");
        printf("4. Display ASCII value of a character\n");
        printf("5. Swap two numbers using a temporary variable\n");
        printf("6. Swap two numbers without using a temporary variable\n");
        printf("7. Calculate simple interest\n");
        printf("8. Calculate compound interest\n");
        printf("9. Calculate areas (Circle, Square, Rectangle, Triangle)\n");
        printf("10. Convert days to Years, Months, and Days\n");
        printf("0. Exit program\n");
        printf("==================================================\n");
        printf("Enter your choice (0-10): ");

        choice = getIntegerInput();

        clearScreen();

        switch(choice) {
            case 0:
                printf("\nExiting program. Goodbye!\n\n");
                break;
            case 1:
                printName();
                break;
            case 2:
                basicCalculator();
                break;
            case 3:
                calculateAverage();
                break;
            case 4:
                displayASCII();
                break;
            case 5:
                swapWithTemp();
                break;
            case 6:
                swapWithoutTemp();
                break;
            case 7:
                calculateSimpleInterest();
                break;
            case 8:
                calculateCompoundInterest();
                break;
            case 9:
                calculateAreas();
                break;
            case 10:
                convertDays();
                break;
            default:
                printf("\nInvalid choice! Please enter a number between 0 and 10.\n");
                returnToMenu();
        }

    } while(choice != 0);

    return 0;
}

// Utility functions
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int getIntegerInput() {
    int input;
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        char *endptr;
        input = strtol(buffer, &endptr, 10);

        // Check if conversion was successful and if the entire input was consumed
        if (endptr == buffer || *endptr != '\n') {
            return -1;  // Invalid input
        }

        return input;
    }

    return -1;  // Error reading input
}

float getFloatInput() {
    float input;
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        char *endptr;
        input = strtof(buffer, &endptr);

        // Check if conversion was successful and if the entire input was consumed
        if (endptr == buffer || (*endptr != '\n' && *endptr != '\0')) {
            return -1.0f;  // Invalid input
        }

        return input;
    }

    return -1.0f;  // Error reading input
}

char getCharInput() {
    char input;
    char buffer[100];

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // If the input is more than one character (plus newline), it's invalid
        if (strlen(buffer) > 2) {
            return '\0';  // Invalid input
        }

        input = buffer[0];
        return input;
    }

    return '\0';  // Error reading input
}

void returnToMenu() {
    printf("\nPress Enter to return to the main menu...");
    clearInputBuffer();
    getchar();
}

// Problem-specific functions
void printName() {
    printf("\n==================================================\n");
    printf("                PRINT YOUR NAME                   \n");
    printf("==================================================\n");

    char name[100];

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(name);
        if (len > 0 && name[len-1] == '\n') {
            name[len-1] = '\0';
        }

        printf("\nHello, %s! Nice to meet you.\n", name);
    } else {
        printf("\nError reading your name.\n");
    }

    returnToMenu();
}

void basicCalculator() {
    printf("\n==================================================\n");
    printf("              BASIC CALCULATOR                    \n");
    printf("==================================================\n");

    float num1, num2;
    int validInput = 1;

    printf("Enter first number: ");
    num1 = getFloatInput();
    if (num1 == -1.0f) {
        printf("Invalid input! Please enter a valid number.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter second number: ");
        num2 = getFloatInput();
        if (num2 == -1.0f) {
            printf("Invalid input! Please enter a valid number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("\nResults:\n");
        printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, num1 * num2);

        if (num2 != 0) {
            printf("Division: %.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        } else {
            printf("Division: Cannot divide by zero!\n");
        }
    }

    returnToMenu();
}

void calculateAverage() {
    printf("\n==================================================\n");
    printf("         AVERAGE OF THREE NUMBERS                 \n");
    printf("==================================================\n");

    float num1, num2, num3;
    int validInput = 1;

    printf("Enter first number: ");
    num1 = getFloatInput();
    if (num1 == -1.0f) {
        printf("Invalid input! Please enter a valid number.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter second number: ");
        num2 = getFloatInput();
        if (num2 == -1.0f) {
            printf("Invalid input! Please enter a valid number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("Enter third number: ");
        num3 = getFloatInput();
        if (num3 == -1.0f) {
            printf("Invalid input! Please enter a valid number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        float average = (num1 + num2 + num3) / 3;
        printf("\nThe average of %.2f, %.2f, and %.2f is: %.2f\n", num1, num2, num3, average);
    }

    returnToMenu();
}

void displayASCII() {
    printf("\n==================================================\n");
    printf("            ASCII VALUE OF A CHARACTER            \n");
    printf("==================================================\n");

    printf("Enter a character: ");
    char ch = getCharInput();

    if (ch == '\0') {
        printf("\nInvalid input! Please enter a single character.\n");
    } else {
        printf("\nThe ASCII value of '%c' is: %d\n", ch, ch);
    }

    returnToMenu();
}

void swapWithTemp() {
    printf("\n==================================================\n");
    printf("      SWAP TWO NUMBERS USING TEMP VARIABLE        \n");
    printf("==================================================\n");

    int num1, num2;
    int validInput = 1;

    printf("Enter first number: ");
    num1 = getIntegerInput();
    if (num1 == -1) {
        printf("Invalid input! Please enter a valid integer.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter second number: ");
        num2 = getIntegerInput();
        if (num2 == -1) {
            printf("Invalid input! Please enter a valid integer.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("\nBefore swapping:\n");
        printf("First number: %d\n", num1);
        printf("Second number: %d\n", num2);

        // Swapping using a temporary variable
        int temp = num1;
        num1 = num2;
        num2 = temp;

        printf("\nAfter swapping (using temporary variable):\n");
        printf("First number: %d\n", num1);
        printf("Second number: %d\n", num2);
    }

    returnToMenu();
}

void swapWithoutTemp() {
    printf("\n==================================================\n");
    printf("    SWAP TWO NUMBERS WITHOUT TEMP VARIABLE        \n");
    printf("==================================================\n");

    int num1, num2;
    int validInput = 1;

    printf("Enter first number: ");
    num1 = getIntegerInput();
    if (num1 == -1) {
        printf("Invalid input! Please enter a valid integer.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter second number: ");
        num2 = getIntegerInput();
        if (num2 == -1) {
            printf("Invalid input! Please enter a valid integer.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("\nBefore swapping:\n");
        printf("First number: %d\n", num1);
        printf("Second number: %d\n", num2);

        // Swapping without using a temporary variable
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;

        printf("\nAfter swapping (without using temporary variable):\n");
        printf("First number: %d\n", num1);
        printf("Second number: %d\n", num2);
    }

    returnToMenu();
}

void calculateSimpleInterest() {
    printf("\n==================================================\n");
    printf("            SIMPLE INTEREST CALCULATOR            \n");
    printf("==================================================\n");

    float principal, rate, time;
    int validInput = 1;

    printf("Enter principal amount: ");
    principal = getFloatInput();
    if (principal == -1.0f || principal < 0) {
        printf("Invalid input! Principal amount must be a positive number.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter annual interest rate (%%): ");
        rate = getFloatInput();
        if (rate == -1.0f || rate < 0) {
            printf("Invalid input! Interest rate must be a positive number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("Enter time period (in years): ");
        time = getFloatInput();
        if (time == -1.0f || time < 0) {
            printf("Invalid input! Time period must be a positive number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        float interest = (principal * rate * time) / 100;
        float amount = principal + interest;

        printf("\nSimple Interest Calculation:\n");
        printf("Principal amount: $%.2f\n", principal);
        printf("Annual interest rate: %.2f%%\n", rate);
        printf("Time period: %.2f years\n", time);
        printf("Simple interest: $%.2f\n", interest);
        printf("Total amount: $%.2f\n", amount);
    }

    returnToMenu();
}

void calculateCompoundInterest() {
    printf("\n==================================================\n");
    printf("          COMPOUND INTEREST CALCULATOR            \n");
    printf("==================================================\n");

    float principal, rate, time;
    int compoundFreq, validInput = 1;

    printf("Enter principal amount: ");
    principal = getFloatInput();
    if (principal == -1.0f || principal < 0) {
        printf("Invalid input! Principal amount must be a positive number.\n");
        validInput = 0;
    }

    if (validInput) {
        printf("Enter annual interest rate (%%): ");
        rate = getFloatInput();
        if (rate == -1.0f || rate < 0) {
            printf("Invalid input! Interest rate must be a positive number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("Enter time period (in years): ");
        time = getFloatInput();
        if (time == -1.0f || time < 0) {
            printf("Invalid input! Time period must be a positive number.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        printf("Enter compounding frequency per year (1=annually, 2=semi-annually, 4=quarterly, 12=monthly): ");
        compoundFreq = getIntegerInput();
        if (compoundFreq != 1 && compoundFreq != 2 && compoundFreq != 4 && compoundFreq != 12) {
            printf("Invalid input! Please enter 1, 2, 4, or 12.\n");
            validInput = 0;
        }
    }

    if (validInput) {
        float amount = principal * pow(1 + (rate / (100 * compoundFreq)), compoundFreq * time);
        float interest = amount - principal;

        const char* frequency;
        switch(compoundFreq) {
            case 1: frequency = "annually"; break;
            case 2: frequency = "semi-annually"; break;
            case 4: frequency = "quarterly"; break;
            case 12: frequency = "monthly"; break;
            default: frequency = "custom"; break;
        }

        printf("\nCompound Interest Calculation:\n");
        printf("Principal amount: $%.2f\n", principal);
        printf("Annual interest rate: %.2f%%\n", rate);
        printf("Time period: %.2f years\n", time);
        printf("Compounding frequency: %s\n", frequency);
        printf("Compound interest: $%.2f\n", interest);
        printf("Total amount: $%.2f\n", amount);
    }

    returnToMenu();
}

void calculateAreas() {
    int choice;

    do {
        printf("\n==================================================\n");
        printf("             AREA CALCULATOR                     \n");
        printf("==================================================\n");
        printf("1. Circle\n");
        printf("2. Square\n");
        printf("3. Rectangle\n");
        printf("4. Triangle\n");
        printf("0. Return to main menu\n");
        printf("--------------------------------------------------\n");
        printf("Enter your choice (0-4): ");

        choice = getIntegerInput();

        if (choice < 0 || choice > 4) {
            printf("\nInvalid choice! Please enter a number between 0 and 4.\n");
            returnToMenu();
            return;
        }

        if (choice == 0) {
            return;
        }

        float area;

        switch(choice) {
            case 1: {
                printf("\n----- CIRCLE AREA -----\n");
                printf("Enter radius: ");
                float radius = getFloatInput();

                if (radius == -1.0f || radius < 0) {
                    printf("Invalid input! Radius must be a positive number.\n");
                } else {
                    area = 3.14159 * radius * radius;
                    printf("\nThe area of a circle with radius %.2f is: %.2f square units\n", radius, area);
                }
                break;
            }
            case 2: {
                printf("\n----- SQUARE AREA -----\n");
                printf("Enter side length: ");
                float side = getFloatInput();

                if (side == -1.0f || side < 0) {
                    printf("Invalid input! Side length must be a positive number.\n");
                } else {
                    area = side * side;
                    printf("\nThe area of a square with side length %.2f is: %.2f square units\n", side, area);
                }
                break;
            }
            case 3: {
                printf("\n----- RECTANGLE AREA -----\n");
                printf("Enter length: ");
                float length = getFloatInput();

                if (length == -1.0f || length < 0) {
                    printf("Invalid input! Length must be a positive number.\n");
                    break;
                }

                printf("Enter width: ");
                float width = getFloatInput();

                if (width == -1.0f || width < 0) {
                    printf("Invalid input! Width must be a positive number.\n");
                    break;
                }

                area = length * width;
                printf("\nThe area of a rectangle with length %.2f and width %.2f is: %.2f square units\n", length, width, area);
                break;
            }
            case 4: {
                printf("\n----- TRIANGLE AREA -----\n");
                printf("Enter base: ");
                float base = getFloatInput();

                if (base == -1.0f || base < 0) {
                    printf("Invalid input! Base must be a positive number.\n");
                    break;
                }

                printf("Enter height: ");
                float height = getFloatInput();

                if (height == -1.0f || height < 0) {
                    printf("Invalid input! Height must be a positive number.\n");
                    break;
                }

                area = 0.5 * base * height;
                printf("\nThe area of a triangle with base %.2f and height %.2f is: %.2f square units\n", base, height, area);
                break;
            }
        }

        printf("\nPress Enter to continue with area calculations or enter 'q' to return to main menu: ");
        char input = getchar();
        clearInputBuffer();

        if (input == 'q' || input == 'Q') {
            return;
        }

    } while (1);
}

void convertDays() {
    printf("\n==================================================\n");
    printf("       CONVERT DAYS TO YEARS, MONTHS, DAYS        \n");
    printf("==================================================\n");

    printf("Enter number of days: ");
    int totalDays = getIntegerInput();

    if (totalDays < 0) {
        printf("Invalid input! Number of days must be a non-negative integer.\n");
    } else {
        int years = totalDays / 365;
        int remainingDays = totalDays % 365;
        int months = remainingDays / 30;
        int days = remainingDays % 30;

        printf("\n%d days is approximately:\n", totalDays);
        printf("%d year(s), %d month(s), and %d day(s)\n", years, months, days);

        printf("\nNote: This calculation uses approximations (365 days per year and 30 days per month).\n");
    }

    returnToMenu();
}
