#include <stdio.h>

int main() {
    int days, years, months;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    days %= 365;
    months = days / 30;
    days %= 30;

    printf("Equivalent: %d Years, %d Months, and %d Days\n", years, months, days);

    return 0;
}
