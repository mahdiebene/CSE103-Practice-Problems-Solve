#include <stdio.h>

int main() {
    int num, i, sum = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a Perfect Number\n", num);
        return 0;
    }

    for(i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            sum += i;
            if(i != num / i) {
                sum += num / i;
            }
        }
    }

    if (sum == num)
        printf("%d is a Perfect Number\n", num);
    else
        printf("%d is not a Perfect Number\n", num);

    return 0;
}
