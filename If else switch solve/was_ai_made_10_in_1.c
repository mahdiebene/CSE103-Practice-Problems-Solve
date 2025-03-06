#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

// Function prototypes
void checkEvenOdd();
void checkPositiveNegativeZero();
void checkVowelConsonant();
void checkDivisibility();
void findMaxMinThreeNumbers();
void checkLeapYear();
void checkValidTriangle();
void findQuadraticRoots();
void calculateGrossSalary();
void determineGrade();
void displayMenu();

int main() {
    int choice;
    char continueChoice;

    do {
        system("cls"); // Use "clear" for Mac
        displayMenu();

        printf("Enter your choice (1-10): ");
        scanf("%d", &choice);

        // Clear input buffer
        while(getchar() != '\n');

        switch(choice) {
            case 1:
                checkEvenOdd();
                break;
            case 2:
                checkPositiveNegativeZero();
                break;
            case 3:
                checkVowelConsonant();
                break;
            case 4:
                checkDivisibility();
                break;
            case 5:
                findMaxMinThreeNumbers();
                break;
            case 6:
                checkLeapYear();
                break;
            case 7:
                checkValidTriangle();
                break;
            case 8:
                findQuadraticRoots();
                break;
            case 9:
                calculateGrossSalary();
                break;
            case 10:
                determineGrade();
                break;
            default:
                printf("Invalid choice! Please select a number between 1 and 10.\n");
        }

        printf("\nDo you want to continue? (y/n): ");
        scanf(" %c", &continueChoice);

    } while(tolower(continueChoice) == 'y');

    printf("Thank you for using the program!\n");
    return 0;
}

void displayMenu() {
    printf("======== MENU DRIVEN PROGRAM ========\n");
    printf("1. Check whether a number is even or odd\n");
    printf("2. Check whether a number is negative, positive, or zero\n");
    printf("3. Check whether an alphabet is a vowel or consonant\n");
    printf("4. Check whether a number is divisible by both 5 and 11\n");
    printf("5. Find the maximum or minimum among three numbers\n");
    printf("6. Check whether a year is a leap year or not\n");
    printf("7. Check whether a triangle is valid or not\n");
    printf("8. Find all the roots of a quadratic equation\n");
    printf("9. Calculate Gross Salary based on Basic Salary\n");
    printf("10. Determine grade based on marks\n");
    printf("=====================================\n");
}

void checkEvenOdd() {
    int number;

    printf("\n--- Check Even or Odd ---\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d is an EVEN number.\n", number);
    else
        printf("%d is an ODD number.\n", number);
}

void checkPositiveNegativeZero() {
    float number;

    printf("\n--- Check Positive, Negative, or Zero ---\n");
    printf("Enter a number: ");
    scanf("%f", &number);

    if(number > 0)
        printf("%.2f is a POSITIVE number.\n", number);
    else if(number < 0)
        printf("%.2f is a NEGATIVE number.\n", number);
    else
        printf("The number is ZERO.\n");
}

void checkVowelConsonant() {
    char ch;

    printf("\n--- Check Vowel or Consonant ---\n");
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    ch = tolower(ch);

    if(isalpha(ch)) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            printf("'%c' is a VOWEL.\n", ch);
        else
            printf("'%c' is a CONSONANT.\n", ch);
    } else {
        printf("Error! Non-alphabetic character entered.\n");
    }
}

void checkDivisibility() {
    int number;

    printf("\n--- Check Divisibility by 5 and 11 ---\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 5 == 0 && number % 11 == 0)
        printf("%d is divisible by both 5 and 11.\n", number);
    else
        printf("%d is NOT divisible by both 5 and 11.\n", number);
}

void findMaxMinThreeNumbers() {
    float num1, num2, num3;
    char choice;

    printf("\n--- Find Maximum or Minimum among Three Numbers ---\n");
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);

    printf("Do you want to find the maximum (M) or minimum (m)? ");
    scanf(" %c", &choice);

    if(choice == 'M' || choice == 'm') {
        if(choice == 'M') {
            // Find maximum
            if(num1 >= num2 && num1 >= num3)
                printf("Maximum: %.2f\n", num1);
            else if(num2 >= num1 && num2 >= num3)
                printf("Maximum: %.2f\n", num2);
            else
                printf("Maximum: %.2f\n", num3);
        } else {
            // Find minimum
            if(num1 <= num2 && num1 <= num3)
                printf("Minimum: %.2f\n", num1);
            else if(num2 <= num1 && num2 <= num3)
                printf("Minimum: %.2f\n", num2);
            else
                printf("Minimum: %.2f\n", num3);
        }
    } else {
        printf("Invalid choice! Please enter 'M' for maximum or 'm' for minimum.\n");
    }
}

void checkLeapYear() {
    int year;

    printf("\n--- Check Leap Year ---\n");
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a LEAP YEAR.\n", year);
    else
        printf("%d is NOT a LEAP YEAR.\n", year);
}

void checkValidTriangle() {
    float angle1, angle2, angle3, sum;

    printf("\n--- Check Valid Triangle ---\n");
    printf("Enter the first angle (in degrees): ");
    scanf("%f", &angle1);
    printf("Enter the second angle (in degrees): ");
    scanf("%f", &angle2);
    printf("Enter the third angle (in degrees): ");
    scanf("%f", &angle3);

    sum = angle1 + angle2 + angle3;

    if(angle1 > 0 && angle2 > 0 && angle3 > 0 && fabs(sum - 180.0) < 0.000001)
        printf("The triangle is VALID.\n");
    else
        printf("The triangle is NOT VALID.\n");
}

void findQuadraticRoots() {
    float a, b, c, discriminant, root1, root2;

    printf("\n--- Find Roots of Quadratic Equation ---\n");
    printf("For a quadratic equation of form ax^2 + bx + c = 0\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);

    if(a == 0) {
        printf("This is not a quadratic equation (a = 0).\n");
        return;
    }

    discriminant = b*b - 4*a*c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The equation has two distinct real roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if(discriminant == 0) {
        root1 = -b / (2 * a);
        printf("The equation has one repeated real root:\n");
        printf("Root = %.2f\n", root1);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("The equation has two complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
}

void calculateGrossSalary() {
    float basicSalary, hra, da, grossSalary;

    printf("\n--- Calculate Gross Salary ---\n");
    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    if(basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if(basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }

    grossSalary = basicSalary + hra + da;

    printf("\nSalary Details:\n");
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);
}

void determineGrade() {
    float marks;

    printf("\n--- Determine Grade Based on Marks ---\n");
    printf("Enter the marks (0-100): ");
    scanf("%f", &marks);

    if(marks < 0 || marks > 100) {
        printf("Error! Marks should be between 0 and 100.\n");
        return;
    }

    printf("Grade: ");

    if(marks >= 80 && marks <= 100)
        printf("A+\n");
    else if(marks >= 70 && marks < 80)
        printf("A\n");
    else if(marks >= 60 && marks < 70)
        printf("B\n");
    else if(marks >= 50 && marks < 60)
        printf("C\n");
    else if(marks >= 40 && marks < 50)
        printf("D\n");
    else
        printf("F\n");
}
