#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, interest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest (in percentage): ");
    scanf("%f", &rate);
    printf("Enter Time (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    interest = amount - principal;

    printf("Compound Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
