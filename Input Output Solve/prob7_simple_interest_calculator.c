#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", interest);

    return 0;
}
