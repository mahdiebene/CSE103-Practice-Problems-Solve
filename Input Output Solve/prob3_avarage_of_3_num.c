#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    printf("Enter the first numbers: ");
    scanf("%f", &num1);
    printf("Enter the second numbers: ");
    scanf("%f", &num2);
    printf("Enter the third numbers: ");
    scanf("%f", &num3);

    average = (num1 + num2 + num3) / 3;

    printf("Average: %.2f\n", average);

}
